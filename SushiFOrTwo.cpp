#include<bits/stdc++.h>
using namespace std;
#define long long ll;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int ones=1;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==1 && arr[i+1]==1)
            ones++;
        else if(arr[i+1]==1)
            ones=0;
    }

    int twos=1;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==2 && arr[i+1]==2)
            twos++;
        else if(arr[i+1]==1)
            twos=0;
    }

    if(twos<ones)
        cout<<2*twos<<endl;
    else
        cout<<2*ones<<endl;

}