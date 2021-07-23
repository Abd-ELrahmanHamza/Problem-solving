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
    char d;
    string str;
    cin>>d>>str;
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
    for(int i=0;i<str.size();i++)
    {
        for(int j=0;j<30;j++)
        {
            if(s[j] == str[i])
            {
                if(d=='R')
                    cout<<s[j-1];
                else 
                    cout<<s[j+1];
                break;
            }
        }
    }
    return 0;
}
