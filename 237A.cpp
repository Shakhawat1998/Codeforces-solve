//https://codeforces.com/problemset/problem/237/A
#include<bits/stdc++.h>
using namespace std;
int arr[24][60];
int main()
{
	int n,a,b;
	cin>>n;
	int cash=0;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		arr[a][b]++;
		
		if(arr[a][b]>cash)
		cash=arr[a][b];
		
	}
	
	cout<<cash<<endl;
	
	return 0;
}
