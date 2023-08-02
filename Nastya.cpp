#include<bits/stdc++.h>
using namespace std;
#define long long ll;
int main()
{
    int n;
    cin>>n;
    int mat[n][2];
    for(int i=0;i<n;i++)
    {
        int l,r;
        cin>>l>>r;
        mat[i][0]=l;
        mat[i][1]=r;
    }
    int k;
    cin>>k;
    int chp_left=0;int index=0;
    for(int i=0;i<n;i++)
    {
        if(mat[i][0]<=k && mat[i][1]>=k){
            index=i;
            break;
        }
    }
    cout<<(n-index)<<endl;
}