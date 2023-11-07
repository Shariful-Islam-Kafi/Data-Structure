#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> mp;
    mp["Afridi"]=10;
    mp["Kafi"]=75;
    mp["Taylor"]=30;

    for(auto it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<endl<<endl;
    cout<<mp["Kafi"]<<endl;
    if(mp.count("Taylor"))
    {
        cout<<mp["Taylor"]<<endl;
    }
    else
    {
        cout<<"Nai"<<endl;
    }
    return 0;
}
