#include<bits/stdc++.h>
using namespace std;
#define long long ll;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    map<int ,int>mp;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
            continue;
        
        mp[arr[i]]++;
    }
    cout<<mp.size()<<endl;
}