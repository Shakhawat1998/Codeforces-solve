//https://codeforces.com/problemset/problem/385/C
#include<bits/stdc++.h>
using namespace std;
long long n,m,a,b,d,e;
const int maxn=1e7+5;
long long z[maxn],x[maxn],zx[maxn];
int main()
{
	
	cin>>n;
	for(int c=0;c<n;c++)
	{
		cin>>d;
		z[d]++;
	}
	memset(x,-1,sizeof(x));
	for(int c=2;c<maxn;c++)
	{
		if(x[c]){
			for(int i=c;i<maxn;i+=c)
			{
				x[i]=0;
				zx[c]+=z[i];
			}
		}
	}
	for(int i=2;i<maxn;i++)
	{
		zx[i]+=zx[i-1];
	}
	cin>>m;
	while(m--)
	{
		cin>>a>>b;
		if(a>=maxn)a=maxn-1;
		if(b>=maxn)b=maxn-1;
		cout<<zx[b]-zx[a-1]<<endl;
	}
	return 0;
} 
 		
