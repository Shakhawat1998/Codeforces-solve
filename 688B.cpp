//https://codeforces.com/problemset/problem/688/B
#include<bits/stdc++.h>
using namespace std;


string reverse(string const &s)
{
	string rev(s.rbegin(),s.rend());
	return rev;
}




int main()
{
	string s;
	cin>>s;
	string s1=reverse(s);
	cout<<s+s1<<endl;
	
	return 0;
}
