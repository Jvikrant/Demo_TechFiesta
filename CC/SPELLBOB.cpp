#include<bits/stdc++.h>

using namespace std;

//check reorder can create bob or not
bool check(string a)
{
	int len=a.length();
	int nb=0;
	int no=0;
	for(int i=0;i<len;i++)
	{
		if(a[i]=='b')
		nb++;
		
		if(a[i]=='o')
		no++;
	}
	
	if(nb==2 && no==1)
	return true;
	else
	return false;
}

//dbc ocb
bool spellBOB(string a,string b,int index)
{
	bool result =false;
	result=check(a)|check(b);
	if (index<3 && !result)
	{
		string c = a;
		string d = b;
		char tmp = c[index];
		c[index] = d[index];
		d[index] = tmp;

		result |= spellBOB(a, b, index+1)|spellBOB(c, d, index+1);
		//cout<<index;
	}
	
	return result;
}

int main()
{
	int T;
	cin>>T;
	
	while(T--)
	{
		string A,B;
		cin>>A>>B;
		
		if(spellBOB(A,B,0))
		cout<<"yes\n";
		else
		cout<<"no\n";
	}
	return 0;
}
