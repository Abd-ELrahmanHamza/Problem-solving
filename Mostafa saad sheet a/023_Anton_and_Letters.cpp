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
    string str, s(26, '1');
    getline(cin,str);
    int count = 0;
    for (int i = 1; i < str.size() - 1; i++)
    {
        if (s[str[i] - 'a'] != str[i])
        {
            count++;
            s[str[i] - 'a'] = str[i];
        }
        i+=2;
    }
    cout<<count;
    return 0;
}