#include<bits/stdc++.h>
using namespace std;
int main()
{
    //vector<int> v;    type-1
    //vector<int> v(5);  type-2
    //vector<int> v(5,9); type-3
    //vector<int>v2(10,5);  type-4
    //vector<int>v(v2); type-4
    int ar[5]={10,20,30,40,50};
    vector<int>v(ar,ar+5);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.size()<<endl;

    return 0;
}
