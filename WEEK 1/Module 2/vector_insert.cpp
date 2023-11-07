#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5,6,7};
   // v.insert(v.begin()+2,100);    single insert
    vector<int> v2={100,99,88,77,66};   //multiple
    v.insert(v.begin()+3,v2.begin(),v2.end());
    for(int x:v)
    {
        cout<<x<<" ";
    }

    return 0;
}



