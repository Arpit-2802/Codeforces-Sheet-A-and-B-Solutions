#include<bits/stdc++.h>
using namespace std;
#define long long ll;
int main()
{
    int n;
    cin>>n;
    int sum1;
    int arr[n];
    int i=0;
    while(n--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        arr[i++]=a+b+c+d;
    }
    int thomas=arr[0];
    sort(arr,arr+n,greater<int>());
    int index;
    for(int j=0;j<n;j++)
    {
        if(thomas==arr[j]){
            index=j;
            break;
        }
    }
    cout<<index<<endl;
}