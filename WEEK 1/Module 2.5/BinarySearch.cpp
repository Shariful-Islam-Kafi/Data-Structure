#include<bits/stdc++.h>
using namespace std;
int binary_src(int *a,int n,int x)
{
    int l=0,r=n-1,mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(a[mid]==x)
        {
            return mid;
        }
        else if(a[mid]>x)
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return -1;

}
int main()
{
    int n,q;
    cin>>n>>q;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    while(q--)
    {
        int x;
        cin>>x;
        int p=binary_src(ar,n,x);
        if(p==-1)
        {
            cout<<"not found"<<endl;
        }
        else
        {
            cout<<"found"<<endl;
        }
    }


    return 0;
}
