#include<bits/stdc++.h>
using namespace std;
#define long long ll;
int main()
{
    int x;
    cin>>x;
    if(x%4==1)
    {   
        int n=0; 
        cout<<n<<" "<<"A"<<endl;
    }
    else if(x%4==2){
        int n=1;
        cout<<n<<" "<<"B"<<endl;
    }
    else if(x%4==3)
    {
        int n=2;
        cout<<n<<" "<<"A"<<endl;
    }
    else if(x%4==0){
        int n=1;
        cout<<n<<" "<<"A"<<endl;
    }

}