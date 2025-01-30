#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, N;
    cin>>T;

    for (int i=0; i<T; i++){
        cin>>N;
    int a[N];
    for (int i=0; i<N; i++ )
    {
        cin>>a[i];
    }

    for (int j=0; j<N; j++)
    {
        int flag=1;

       for(int k=j-1;k>=0;k--)
       {
           if(a[j]<a[k] and k>=0)
           {
               flag=0;
                break;
           }

           else {
                flag=1;


           }
       }
       cout<<flag<< " ";


    }
    cout<<endl;

    }
}

