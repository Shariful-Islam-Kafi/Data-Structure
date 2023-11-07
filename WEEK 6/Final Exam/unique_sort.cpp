#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        vector<int> v;
        set<int> s;
        int n;
        cin>>n;
        while(n--)
        {
            int x;
            cin>>x;
            s.insert(x);
        }
        for(auto it=s.begin();it!=s.end();it++)
        {
            v.push_back(*it);
        }
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
