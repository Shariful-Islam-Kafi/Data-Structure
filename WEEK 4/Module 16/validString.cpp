#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        queue<char> q;
        string s;
        cin>>s;
        for(char c:s)
        {
            q.push(c);
        }
        stack<char> st;
        while(!q.empty())
        {
            if(st.empty())
            {
                st.push(q.front());
                q.pop();
            }
            else
            {
                if(q.front()==st.top())
                {
                    st.push(q.front());
                    q.pop();
                }
                else
                {
                    q.pop();
                    st.pop();
                }
            }
        }
        if(st.empty())
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
