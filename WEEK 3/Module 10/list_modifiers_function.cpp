#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList={10,20,30,40,50,30,60,70,30,80,30};
   /* list copy
    list<int> newList;
    newList=myList;*/

    //isert at tail
    //myList.push_back(40);
    //myList.push_back(50);

    //delete tail
    //myList.pop_back();

    //insert head
    //myList.push_front(100);

    //delete head
    //myList.pop_front();


    //insert at specific position:
    // myList.insert(next(myList.begin(),2),100);

    // myList.insert(next(myList.begin(),2),{100,200,300});

    //list<int> newList={77,88,99};
    //myList.insert(next(myList.begin(),2),newList.begin(),newList.end());

    //vector<int> v={100,200,300};
  // myList.insert(next(myList.begin(),2),v.begin(),v.end());

    //int ar[5]={100,200,300,400,500};
    //myList.insert(next(myList.begin(),2),ar,ar+5);

    //delete
    //myList.erase(next(myList.begin(),2));
    //myList.erase(next(myList.begin(),2),next(myList.begin(),5));

    //replace

    //replace(myList.begin(),myList.end(),30,100);
    /*for(int val:myList)

    {
        cout<<val<<endl;
    } */
    //find

    auto it=find(myList.begin(),myList.end(),40);
    if(it==myList.end())
    {
        cout<<"Not Found!";
    }
    else
    {
        cout<<"Found"<<endl;
    }


    return 0;
}
