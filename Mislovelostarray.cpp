#include<bits/stdc++.h>
using namespace std;
#define long long ll;
int find_max(int n,int r)
{
    int k=2;
    int numOfSame=n-r+1;
    int sum=0;
    sum+=numOfSame;
    for(int i=0;i<n-numOfSame;i++){
        sum+=k;
        k=k*2;
    }
    return sum;
}
int find_min(int n,int l)
{
    int k=2;
    int numOfSame=n-l+1;
    int sum=0;
    sum+=numOfSame;
    for(int i=0;i<n-numOfSame;i++){
        sum+=k;
        k=k*2;
    }
    return sum;
}
int main()
{
    int n,l,r;
    cin>>n>>l>>r;
    int ans1=find_min(n,l);
    int ans2=find_max(n,r);
    cout<<ans1<<" "<<ans2<<endl;

}
