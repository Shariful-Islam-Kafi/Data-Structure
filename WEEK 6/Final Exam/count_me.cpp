#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        string sentence;
        getline(cin,sentence);
        string word;
        stringstream ss(sentence);
        map<string,int> mp;
        while(ss>>word)
        {
            mp[word]++;
        }
        int mx=0;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second>mx)
            {
                mx=it->second;
            }
        }
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second==mx)
            {
                cout<<it->first<<" "<<it->second<<endl;
            }
        }
    }

    return 0;
}
