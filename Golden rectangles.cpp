#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,count=0;
	cin>>t;
	while(t--)
	{
		double a,b;
		cin>>a>>b;
		if((a/b>=1.6&&a/b<=1.70)||(b/a>=1.6&&b/a<=1.70))
		{
			count++;
		}
	}
	cout<<count;
	return 0;
}
