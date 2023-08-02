#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a<1 || b<2 || c<4)
        cout<<"0"<<endl;
    else{
        int x=1, y=1,z=1;
        while(x<=a && y<=b && z<=c){
            x+=1;
            y=x*2;
            z=x*4;
        }
        x=x-1;
        cout<<(x+ 2*x + 4*x)<<endl;
    }
}