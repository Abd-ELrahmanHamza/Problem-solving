#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::max;
using std::min;
using std::string;
using std::to_string;
int main()
{
    int n;
    cin>>n;
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(s.size()>10)
            cout<<s[0]<<s.size()-2<<s[s.size()-1];
        else 
            cout<<s;
        if(i!=n-1)
            cout<<endl;
    }
    return 0;
}