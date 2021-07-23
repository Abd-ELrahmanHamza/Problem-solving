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
using std::pair;
using std::string;
using std::vector;
int main()
{
    int x;
    cin>>x;
    string s;
    cin>>s;
    vector<bool> v(26,0);
    for(char c:s)
        v[tolower(c) - 'a'] = 1;
    for(int i=0;i<26;i++)
        if(v[i]!=1)
        {
            cout<<"NO";
            return 0;
        }
    cout<<"YES";
    return 0;
}
