#include<bits/stdc++.h>
using namespace std;
#define long long ll;
bool arrayA(int nums1[],int n,int x)
{
    bool ans=false;
    for(int i=0;i<n;i++)
    {
        if(x==nums1[i]){
            ans=true;
            break;
        }
    }
    return ans;
}
bool arrayB(int nums2[],int m,int x)
{
    bool ans=false;
    for(int i=0;i<m;i++)
    {
        if(x==nums2[i]){
            ans=true;
            break;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int nums1[n];
    for(int i=0;i<n;i++)
        cin>>nums1[i];
    
    int m;
    cin>>m;
    int nums2[m];
    for(int i=0;i<m;i++)
        cin>>nums2[i];
    
    int flag=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            bool ans1=arrayA(nums1,n,nums1[i]+nums2[j]);
            bool ans2=arrayA(nums2,m,nums1[i]+nums2[j]);
            if(ans1==false && ans2==false)
            {
                cout<<nums1[i]<<" "<<nums2[j];
                flag=0;
                break;
            }
        }
        if(flag==0)
            break;
    }
    
}
