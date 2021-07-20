#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int l,r,count=0;
        cin>>l;
        cin>>r;
        for(int i=l;i<=r;i++)
        {
            int x=i,sum=0;
            while(x>0)
            {
                sum+=(x%16);
                x/=16;
            }
            if( __gcd(sum, i)>1)
            {
            	count++;
			}
        }
        cout<<count<<endl;
    }
    return 0;
}
