#include<bits/stdc++.h>
using namespace std;

struct MyHash
{
	int *arr;
	int cap,size;

	MyHash(int c)
	{
		cap=c;
		size=0;
		arr=new int[cap];// costly operation
		for(int i=0;i<cap;i++)
			arr[i]=-1;
	}

	int hash(int key)
	{
		return key%cap;
	}

	bool search(int key)
	{
		int h=hash(key);
		int i=h;
		while(arr[i] != -1)
		{
			if (arr[i]==key)
				return true;
			i=(i+1)%cap;
			if(i==h)
				return false;
		}
		return false;

	}

	bool insert(int key)
	{
		if(size==cap)
			return false;
		int i=hash(key);
		while(arr[i] !=-1 && arr[i] !=-2 && arr[i] !=key)
			i=(i+1)%cap;
		if(arr[i]==key)
			return false;
		else
		{
			arr[i]=key;
			size++;
			return true;
		}
	}

	bool erase(int key)
	{
		int h=hash(key);
		int i=h;
		while(arr[i] !=-1)
		{
			if(arr[i]==key)
			{
				arr[i]=-2;
				return true;
			}
			i=(i+1)%cap;
			if(i==h)
				return false;
		}
		return false;
	}
	void print()
	{
		for(int i=0;i<cap;i++)
			cout<<arr[i]<<" ";
		cout<<"\n";
	}
};

int main(){
	MyHash mh(7);

	mh.insert(42);
	mh.insert(63);
	mh.insert(56);
	mh.insert(52);
	mh.insert(48);
	mh.insert(54);
	mh.print();

	if(mh.search(56)==1)
		cout<<"Found"<<'\n';
	else
		cout<<"Not Found";

	mh.erase(54);

	if(mh.search(54)==1)
		cout<<"Found"<<'\n';
	else
		cout<<"Not Found";

	return 0;
}