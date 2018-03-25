#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int a,b,c,d,sum,f;
    stack<int> st;
    cin>>a>>b>>c;
    sum=a+b;
    do
    {
        d=sum%c;
        sum/=c;
        st.push(d);
    }while(sum!=0);
    while(!st.empty())
    {
        f=st.top();
        cout<<f;
        st.pop();
    }
    return 0;
}
