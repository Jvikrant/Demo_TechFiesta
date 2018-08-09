 #include<bits/stdc++.h>
 
 using namespace std;
 
 int main()
 {
 	int P,S;
 	cin>>P>>S;
 	
 	vector<vector<pair<int,int> > > Mat(P,vector<pair<int,int> >());
 	
 	for(int i=0;i<2*P;i++)
 	{
 		for(int j=0;j<S;j++)
 		{
			
	 		if(i%2==0)
	 		{
	 			int NS;
	 			cin>>NS;
	 			int ind=(int)((i+1)/P);
	 			Mat[ind].push_back(make_pair(NS,0));
			}
			else
			{
				int ind=(int)((i+1)/P);
				cin>>Mat[ind][j].second;
			}
		}
	}

	
	for(int i=0;i<Mat.size();i++)
	{
		for(int j=0;j<Mat[i].size();j++)
		{
			cout<<"F"<<Mat[i][j].first<<" S"<<Mat[i][j].second<<"\n";	
		}
		cout<<"\n\n\n";
	}
	
 	return 0;
 }
