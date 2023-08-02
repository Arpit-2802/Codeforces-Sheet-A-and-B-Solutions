#include<bits/stdc++.h>
using namespace std;
#define long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,k;
        cin>>a>>b>>c>>d>>k;
        int pen=1;
        int x=a-c;
        while(x>0)
        {
            x=x-c;
            pen++;
        }
        int pencil=1;
        int y=b-d;
        while(y>0)
        {
            y=y-d;
            pencil++;
        }
        if(pencil+pen<=k)
        {
            cout<<pen<<" "<<pencil<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}