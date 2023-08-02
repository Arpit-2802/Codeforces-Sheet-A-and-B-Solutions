#include<bits/stdc++.h>
using namespace std;
#define long long ll;
bool win_check(char tic[3][3],char symbol)
{
    for(int i=0;i<3;i++)
    {
        if(tic[i][0]==symbol && tic[i][1]==symbol && tic[i][2]==symbol )
            return true;
    }

    for(int i=0;i<3;i++)
    {
        if(tic[0][i]==symbol && tic[1][i]==symbol && tic[2][i]==symbol )
            return true;
    }

    if(tic[0][0]==symbol && tic[1][1]==symbol && tic[2][2]==symbol)
        return true;
    
    if(tic[0][2]==symbol && tic[1][1]==symbol && tic[2][0]==symbol)
        return true;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char tic[3][3];
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>tic[i][j];
            }
        }

        // bool plus=false;
        // plus=win_check(tic,'+');
        // bool cross=false;
        // cross=win_check(tic,'X');
        // bool dot=false;
        // dot=win_check(tic,'O');

        if(win_check(tic,'+'))
            cout<<"+"<<endl;
        else if(win_check(tic,'X'))
            cout<<"X"<<endl;
        else if(win_check(tic,'O'))
            cout<<"O"<<endl;
        else 
            cout<<"DRAW"<<endl;

    }
}