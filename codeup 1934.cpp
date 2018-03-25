#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,a,x,N;
    cin>>n;
    vector<int> V1;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        V1.push_back(a);
    }
    cin>>x;
    for(int i=0;i<N;i++)
    {
        if(V1[i]==x)
        {
            N=i;
            goto c;
        }
    }
    cout<<-1;
    return 0;
    c:
    cout<<N;
    return 0;
}
