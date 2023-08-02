#include<bits/stdc++.h>
using namespace std;
#define long long ll;
int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<=n;i++)
    {
        arr[i]=(i*i)+(i-1)*(i-1);
    }
    cout<<arr[n]<<endl;
}