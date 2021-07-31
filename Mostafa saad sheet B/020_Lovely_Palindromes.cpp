#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
#include <utility>
#include <iomanip>
#include <map>
#include <limits>
#include<stack>
using namespace std;
int main()
{
    string s;
    cin>>s;
    stack<char>st;
    for(int i=0;i<s.length();i++)
        st.push(s[i]);
    cout<<s;
    while(!st.empty())
    {
        cout<< st.top();
        st.pop();
    }

    return 0;
}
