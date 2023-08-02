#include<bits/stdc++.h>
using namespace std;
#define long long ll;
int main()
{
    int n;
    cin>>n;
    int ans=1;
    for(int i=2;i*i<n;i++)
    {
        if(n%i==0)
            ans+=2;
    }
    if((double)sqrt(n)==(int)sqrt(n))
        ans++;

    cout<<ans<<endl;
}