#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin>>n;
    int arr[n];int pos=0,neg=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>0)
            pos++;
        else if(arr[i]<0)
            neg++;  
    }
    int x;
    if(n%2==0)
    {
        x=n/2;
    }
    else{
        x=n/2+1;
    }

    if(x<=pos)
    {
        cout<<1<<endl;
    }
    else if(x<=neg)
    {
        cout<<-1<<endl;
    }
    else 
        cout<<0<<endl;
}