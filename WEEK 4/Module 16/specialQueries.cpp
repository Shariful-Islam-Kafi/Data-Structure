#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        string s;
        cin>>a;
        if(a==0)
        {
            cin>>s;
            q.push(s);
        }
        else if(a==1)
        {
            if(!q.empty())
            {
                cout<<q.front()<<endl;
                q.pop();
            }
            else
            {
                cout<<"Invalid"<<endl;
            }
        }
    }

    return 0;
}
