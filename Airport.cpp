#include<bits/stdc++.h>
using namespace std;
#define ll long long

 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        for(int i=0;i<n;i++)
            cin>>dep[i];
        
        map<int ,int> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
            mp[dep[i]]++
        }
        
        
        
        int max=INT16_MIN;
        for(auto i:mp)
        {
            if(max>=i.second)
                max=i.second;
        }
        cout<<max<<endl;
        
    }
}
