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
    int carry = 0;
    string s1, s2;
    cin >> s1 >> s2;
    std::reverse(s1.begin(), s1.end());
    std::reverse(s2.begin(), s2.end());
    vector<int> result(600, 0);

    for (int i = 0; i < s1.size(); i++)
        for (int j = 0; j < s2.size(); j++)
            result[i + j] += (s1[i] - '0') * (s2[j] - '0');
    for(int i=0;i<599;i++)
    {
        result[i+1]+=result[i]/10;
        result[i]%=10;
    }
    int index=-1;
   for(int i=result.size()-1;i>=0;i--)
        if(result[i]!=0)
        {
            index = i;
            break;
        }
            
    for(int i=index;i>=0;i--)
        cout<<result[i];

    return 0;
}
