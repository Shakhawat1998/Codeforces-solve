//https://codeforces.com/problemset/problem/459/C
#include<bits/stdc++.h>
using namespace std;
int a[100003];
int main()
{
	int n,k,d;
	cin>>n>>k>>d;
	bool f=false;
	if(k>=n){
		f=true;
	}
	int p=k;
	for(int i=2;i<=d;i++)
	{
		p*=k;
		if(p>=n)
		f=true;
	}
	
	if(f){
		for(int i=1;i<=n;i++)
		a[i]=i;
		for(int i=1;i<=d;i++){
			for(int j=1;j<=n;j++){
				cout<<a[j]%k+1<<" ";
				a[j]=a[j]/k;
			}
			cout<<endl;
		}
	}
	else cout<<"-1"<<endl;
	
	
	return 0;
	
	
	
}
