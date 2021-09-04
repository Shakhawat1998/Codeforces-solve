//https://codeforces.com/problemset/problem/486/C
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,p,l=-1,r=0,ans=0;
	string a;
	cin>>n>>p>>a;
	n--,p--;
	if(p>n/2)
	{
		p=n-p;
		
	}
	
	for(int i=0;i<=n/2;i++)
	{
		if(a[i]!=a[n-i])
		{
			int t=abs(a[i]-a[n-i]);
			ans+=min(t,26-t);
			if(l<0)
			{
				l=i;
			}
			else
			{
				r=i;
			}
		}
	}
	
	ans+=min(abs(p-l),abs(p-r));
	ans+=max(r-l,0);
	cout<<(l<0?0:ans);
	
	
	return 0;
}
