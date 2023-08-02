#include<bits/stdc++.h>
using namespace std;
#define long long ll;
int main()
{
    int n,m;
    cin>>n>>m;
    string str;
    cin>>str;
    int l,r;
    string c1,c2;
    while(m--)
    {
        cin>>l>>r>>c1>>c2;
        for(int i=l-1;i<r;i++)
        {
            if(str[i]==c1[0])
                str[i]=c2[0];
        }
    }
    cout<<str<<endl;

}