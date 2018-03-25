#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cin>>str;
    auto it1=str.begin();
    auto it2=++str.end();
    while(++it1==it2&&it1==it2)
    {
        if(*it1!=*(it2))
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
