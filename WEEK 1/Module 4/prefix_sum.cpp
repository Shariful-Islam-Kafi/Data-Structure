#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    long long pre[n];
    pre[0]=ar[0];
    for(int i=1;i<n;i++)
    {
        pre[i]=ar[i]+pre[i-1];
    }
    reverse(pre,pre+n);
    for(int i=0;i<n;i++)
    {
        cout<<pre[i]<<" ";
    }
    cout<<endl;

    return 0;
}
