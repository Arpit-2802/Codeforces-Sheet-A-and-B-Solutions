#include<bits/stdc++.h>
using namespace std;
#define long long ll;
int indexOfChar(string lay1,char ch)
{
    int ans=0;
    for(int i=0;i<26;i++)
    {
        if(ch==lay1[i])
            ans=i;
    }
    return ans;
}
int main()
{
    string lay1;
    string lay2;
    string str;
    cin>>lay1;
    cin>>lay2;
    cin>>str;
    string ans;
    int l=str.length();
    for(int i=0;i<l;i++)
    {
        if(str[i]>=48 && str[i]<=57)
        {
            ans+=str[i];
        }
        else{
            
            if(str[i]>=65 && str[i]<=90){
                char ch=(char)tolower(str[i]);
                int index=indexOfChar(lay1,ch);
                ans+= (char) toupper(lay2[index]);
            }
            else{
                int index=indexOfChar(lay1,str[i]);
                ans+=lay2[index];
            }
        }
    }
    cout<<ans<<endl;
}
