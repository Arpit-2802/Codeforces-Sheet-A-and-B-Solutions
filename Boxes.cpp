#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int arr[m];
        int sum=0;
        for(int i=0;i<m;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }

        int ans=(sum+(n-1))%n;
        ans=n-ans;
        cout<<ans<<endl;

    }
}