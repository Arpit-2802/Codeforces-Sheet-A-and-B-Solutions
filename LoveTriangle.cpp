#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    
    int flag=0;
    for(int i=1;i<=n;i++)
    {
        if(arr[arr[arr[i]]]==i)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;

}