#include<bits/stdc++.h>
using namespace std;
class myStack
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    }
};
int main()
{
    myStack st1;
    myStack st2;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st1.push(x);
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        st2.push(x);
    }
    if(st1.size() != st2.size())
    {
        cout<<"NO"<<endl;
    }
    else
    {
        while(!st1.empty())
        {
            if(st1.top()!=st2.top())
            {
                cout<<"NO"<<endl;
                return 0;
            }
            st1.pop();
            st2.pop();
        }
        cout<<"YES"<<endl;
    }

    return 0;
}
