#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int ar[n];
   for(int i=0;i<n;i++)
   {
       cin>>ar[i];
   }
   for(int i=0;i<n;i++)
   {
       for(int j=i+1;j<n;j++)
       {
           if(ar[i]==ar[j])
           {
               cout<<"YES"<<endl;
               return 0;
           }
       }
   }
   cout<<"NO"<<endl;


    return 0;
}

