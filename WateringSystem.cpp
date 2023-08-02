#include<bits/stdc++.h>
using namespace std;
#define long long ll;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int arr[n];
    int total=0;int count=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        total+=arr[i];
    }

    int x=arr[0];
    sort(arr+1,arr+n);
    for(int i=n-1;i>0;i--)
    {
        if(x*a/total>=b)
            break;
        
        total-=arr[i];
        count++;
    }
    cout<<count<<endl;
}
