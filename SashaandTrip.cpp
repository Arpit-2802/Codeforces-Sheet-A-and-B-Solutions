#include<bits/stdc++.h>
using namespace std;
#define long long ll;
int main()
{
    int n,v;
    cin>>n>>v;
    int fuelReq=n-1;
    
    if(fuelReq<v)
        cout<<(fuelReq)<<endl;
    else if(fuelReq==v)
        cout<<v<<endl;
    else{
        int cost=v;
        int x=fuelReq-v;
        int k=2;
        while(x--)
        {
            cost+=k;
            k++;
        }
        cout<<cost<<endl;
    }
}