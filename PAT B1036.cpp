#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int N,n;
    char character;
    cin>>N>>character;
    vector<char> V1;
    for(int i=0;i<N;i++)
        V1.push_back(character);
    for(int i=0;i<N;i++)
        cout<<V1[i];
        cout<<endl;
    if(N%2==0)
        n=N/2;
    else
        n=N/2+1;
    for(int i=0;i<n-2;i++)
    {
        cout<<character;
        for(int j=0;j<N-2;j++)
            cout<<" ";
        cout<<character<<endl;
    }
    for(int i=0;i<N;i++)
        cout<<V1[i];
    cout<<endl;
    return 0;
}
