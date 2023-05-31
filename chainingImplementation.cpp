#include<bits/stdc++.h>
using namespace std;
struct MyHash
{
	int BUCKET;
	list<int> *table;
	MyHash(int b)
	{
		BUCKET=b;
		table=new list<int>[BUCKET];
	}
	void insert(int key)
	{
		int i=key%BUCKET;
		table[i].push_back(key);
	}
	bool search(int key)
	{
		int i=key%BUCKET;
		for(auto x:table[i])
			if(x==key)
				return true;
		return false;
	}
	void remove(int key)
	{
		int i=key%BUCKET;
		table[i].remove(key);
	}
	
};
int main()
{
	MyHash mh(7);
	mh.insert(70);
	mh.insert(71);
	mh.insert(9);
	mh.insert(56);
	mh.insert(72);
	cout<<mh.search(71)<<" ";
	mh.remove(15);
	cout<<mh.search(15);
	return 0;
}