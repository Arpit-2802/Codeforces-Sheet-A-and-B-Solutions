#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int a,b;
    cin>>a>>b;
    int x=(a+b)/2;
    int total=0;
    for(int i=1;i<=abs(x-a);i++){
        total+=i;
    } 
    for(int i=1;i<=abs(b-x);i++){
        total+=i;
    }
    cout<<total<<endl;
}