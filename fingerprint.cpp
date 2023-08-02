#include<bits/stdc++.h>
using namespace std;
#define long long ll;
int main()
{
    int n,m;
    cin>>n>>m;
    int nums1[n],nums2[m];
    for(int i=0;i<n;i++)
        cin>>nums1[i];
    
    for(int i=0;i<m;i++)
        cin>>nums2[i];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(nums1[i]==nums2[j]){
                cout<<nums1[i]<<" ";
            }
        }
    }
    

}