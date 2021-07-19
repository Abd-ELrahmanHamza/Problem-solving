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
int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    for (int i = s.size() / 2; i < s.size() ; i++)
    {
        cout<<s[i];
        if(i!=s.size()-1)
            cout<<'+';
    }
    return 0;
}