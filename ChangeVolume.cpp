#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        //int mini=INT16_MAX;
        //int nums[]={1,2,5};
        int diff=abs(a-b);
        int count=0;
        count+=diff/5;
        diff=diff%5;
        count+=diff/2;
        diff=diff%2;
        count+=diff;
        cout<<count<<endl;
    }

}