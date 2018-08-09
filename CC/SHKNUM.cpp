#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T>0)
	{
	    int num;
	    cin>>num;
	    
	    int N=num;
	    
	    int op=0;
	    
	    int x=(int)log2(num);
	    num-=(int)pow(2,x);
	    
	    if(num==0)
	    op=1;
	    else
	    {
	    	int y=(int)log2(num);
	    	op=num-(int)pow(2,y);
	    	
	    	//op=op>op1?op1:op;
		}
		
		num=N;
		num-=op;
		x=(int)log2(num);
		num-=(int)pow(2,x);
		if(num==0)
	    op=abs(op)-1;
		
		cout<<op<<"\n";
	    T--;
	}
	return 0;
}

