#include <map>
#include <list>
#include <string>
#include <iostream>
using namespace std;

struct edge;
struct vertext;

struct vertex {
	string value;
	bool visited;
	vertex * parent;
	list<edge *> edges;
	map<string, edge*> merged;
	vertex(string v): value(v), parent(0), visited(false){}
};

struct edge{
	vertex *v;
	vertex *w;
	string* original;
	string value;
	edge(string v, string* o):value(v), original(o){}
};

void dfs(vertex *v, vertex *parent)
{
	list<edge *>::iterator iter;
	list<edge *>::iterator subiter;
	for (iter = v->edges.begin(); iter != v->edges.end(); iter++)
	{
		edge *e = (*iter);
		vertex* w = (e->v->value != v->value)? e->v : e->w;
		if (w->visited != true)
		{
			w->visited = true;
			w->parent = parent;
			for (subiter = w->edges.begin(); subiter != w->edges.end(); subiter++)
			{
				if (parent->merged.find((*subiter)->value) == parent->merged.end())
				{
					parent->merged[(*subiter)->value] = (*subiter);
				}
			}	
			dfs(w, parent);
		}	
	}
}


list<list<string>> merge_contact(string ** input, int len)
{
	list<list<string>>result;
	map<string, vertex *> vertices;
	map<string, vertex *>::iterator iter;

	//create the graph
	for (int i = 0; i <len; i++)
	{
		edge * e = new edge(input[i][0], input[i]);
		if ((iter = vertices.find(input[i][1])) != vertices.end())
		{
			e->v = iter->second;
			e->v->edges.push_back(e);
		} else {
			vertex * v = new vertex(input[i][1]);
			vertices[v->value] = v;
			v->edges.push_back(e);
			e->v = v;
		}

		if ((iter = vertices.find(input[i][2])) != vertices.end())
		{
			e->w = iter->second;
			e->w->edges.push_back(e);
		} else {
			vertex * w = new vertex(input[i][2]);
			vertices[w->value] = w;
			w->edges.push_back(e);
			e->w = w;
		}
	}

	for(iter = vertices.begin(); iter != vertices.end(); iter++)
	{
		if (iter->second->visited != true)
		{
			iter->second->visited = true;
			dfs(iter->second, iter->second);
		}
	}

	for (iter = vertices.begin(); iter!= vertices.end(); iter++)
	{
		vertex *v = iter->second;
		if (!v->parent)
		{
			list<string> m;
			map<string, edge*>::iterator i;
			for(i = v->merged.begin(); i != v->merged.end(); i++)
			{
				edge * e = i->second;
				m.push_back(e->original[0]);
				m.push_back(e->original[1]);
				m.push_back(e->original[2]);
			}	
			result.push_back(m);
		}
	}
	return result;
}

int main()
{
	string ** input = new string*[4];
	string s1[3] = {"John", "john@gmail.com", "john@fb.com"};
	string s2[3] = {"Dan", "dan@gmail.com", "+1234567"};
	string s3[3] = {"john123", "+5412312", "john123@skype.com"};
	string s4[3] = {"john1985", "+5412312", "john@fb.com"};
	input[0] = s1;
	input[1] = s2;
	input[2] = s3;
	input[3] = s4;
	list<list<string>>result = merge_contact(input, 4);

	list<list<string>>::iterator i;
	list<string>::iterator i2;
	for (i = result.begin(); i != result.end(); i++)
	{
		cout << "[ ";
		for (i2 = (*i).begin(); i2 != (*i).end(); i2++)
		{
			cout<<(*i2) <<", ";
		}
		cout<< " ], ";
	}

	cout<< endl;
	return 1;
}