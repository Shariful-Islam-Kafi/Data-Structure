#include<bits/stdc++.h>
using namespace std;

int main()
{
//    list<int> mylist;

//    list<int> mylist(10);

//    list<int> mylist(10,5);
//    cout<<mylist.front();

//    list<int> list2={10,20,30,40,50};
//    list<int> mylist(list2);

//    int ar[5]={100,200,300,400,500};
//    list<int> mylist(ar,ar+5);

    vector<int> v={1,2,3,4,5};
    list<int> mylist(v.begin(),v.end());
//    for( auto it=mylist.begin();it!=mylist.end();it++)
//    {
//        cout<<*it<<endl;
//    }

    for(int val: mylist)
    {
        cout<<val<<endl;
    }
    return 0;
}
