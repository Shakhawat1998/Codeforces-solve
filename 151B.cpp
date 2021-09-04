//https://codeforces.com/problemset/problem/151/B
#include<bits/stdc++.h>
using namespace std;
int num[110];
string s;
string name[110];
int nas[110][3];

string action[]={"caa a taxi","order a pizza","go to a cafe with a wonderful girl"};


int trans(string s)
{
	int i,ret=0;
	for(i=0;i<s.length();i++)
	if(s[i]!='-')
	if(s[i]!=s[0])
	break;
	
	if(i==s.length())
	return 0;
	
	
	for (i = 1; i<s.length(); i++)
		if ( i%3 == 0 )
		{
			if ( s[i]>=s[i-2] )
				break;
		}else if ( i%3 == 1 )
		{
			if ( s[i]>=s[i-1] )
				break;
		}
 
	if (i==s.length())
		return 1;
 
	return 2;
	
}



int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>num[i];
		cin>>name[i];
		for(int j=1;j<=num[i];j++)
		[
		cin>>s;
		ans[i][trans(s)]++;
	}
	
	for(int i=0;i<3;i++)
	{
		int maxj=1;
		for(int j=1;j<=n;j++)
		{
			if(ans[j][i]>=ans[maxj][i])
			maxj=j;
		}
		
		
		
		cout<<"If you want to "<<action[i]<<",you should call:";
		
		for(int j=1;j<maxj;j++)
		{
			if(ans[j][i]==ans[maxj][i])
			{
				cout<<name[j]<<", ";
			}
		}
		
		cout<<namx[maxj]<<"."<<endl;
		
		
	}
	
	return 0;
	
}
