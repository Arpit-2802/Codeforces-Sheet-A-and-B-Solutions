#include<bits/stdc++.h>
using namespace std;
#define long long ll;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int plus=0;int minus=0;int rem=0;
    // if(s[0]=='-'){
    //     //n=n-1;
    //     rem=0;
    // }
    // else{
    //     rem=1;
    // }
    
    for(int i=0;i<n;i++)
    {
        if(s[i]=='-' && rem>0)
            rem-=1;
        else if(s[i]=='+')
            rem+=1;
    }
    cout<<rem<<endl;
    
}