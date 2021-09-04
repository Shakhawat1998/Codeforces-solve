//https://codeforces.com/problemset/problem/550/C
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	s="00"+s;
	int a=s.size();
	for(int i=0;i<a;i++)
	{
		for(int j=i+1;j<a;j++)
		   for(int k=j+1;k<a;k++)
		   {
		   	 int b;
		   	 b=(s[i]-'0')*100+(s[j]-'0')*10+(s[k]-'0');
		   	 if(b%8==0)
		   	 {
		   	   cout<<"YES"<<endl;
			   cout<<b<<endl;
			   return 0;	
			 }
		   }
	}
	
	cout<<"NO"<<endl;
	return 0;
}


