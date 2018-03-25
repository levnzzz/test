#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int N,score,schid;
    cin>>N;
    vector<int> school(N);
    for(int i=0;i<N;i++)
    {
        cin>>schid>>score;
        school[schid]+=score;
    }
    int MAX=0,k=-1;
    for(int i=0;i<N;i++)
    {
        if(MAX<school[i])
            MAX=school[i],k=i;
    }
    cout<<MAX<<" "<<k<<endl;
    return 0;
}
