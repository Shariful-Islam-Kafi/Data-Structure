#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int> v(26,0);
    for(int i=0;i<s.size();i++)
    {
        v[s[i]-'a']++;
    }
    for(char c='a';c<='z';c++)
    {
        if(v[c-'a']>0)
        {
            cout<<c<<" : "<<v[c-'a']<<endl;
        }
    }


    return 0;
}







