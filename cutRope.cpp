#include<bits/stdc++.h>
using namespace std;
#define long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        //int mat[n][2];
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
            if(x<=y)
                ans++;
        }
        cout<<n-ans<<endl;
    }
}