#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int sum=0;
        while(b>=1 && c>=2){
            sum+=3;
            b-=1;
            c-=2;
        }
        while(b>=2 && a>=1){
            sum+=3;
            b-=2;
            a-=1;
        }
        
        cout<<sum<<endl;
    }


}