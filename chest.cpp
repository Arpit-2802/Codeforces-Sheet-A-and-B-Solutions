#include<bits/stdc++.h>
using namespace std;
#define long long ll;
int main()
{
    int n,m;
    cin>>n>>m;
    int chest[n];
    int keys[m];
    for(int i=0;i<n;i++)
        cin>>chest[i];
    for(int i=0;i<m;i++)
        cin>>keys[i];
    
    //int ans=0;int i=0;int j=0;
    int odd_chest=0;int odd_keys=0;int even_chest=0;int even_keys=0;
    for(int i=0;i<n;i++)
    {
        if(chest[i]%2==1)
            odd_chest++;
        else
            even_chest++;
    }
    for(int i=0;i<m;i++)
    {
        if(keys[i]%2==1)
            odd_keys++;
        else
            even_keys++;
    }
    int ans=min(even_chest,odd_keys)+min(even_keys,odd_chest);
    cout<<ans<<endl;
}