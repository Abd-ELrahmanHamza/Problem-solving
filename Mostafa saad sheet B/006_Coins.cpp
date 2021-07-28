#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
#include <utility>
#include <iomanip>
#include <map>
using namespace std;
int main()
{
    string s[3];
    cin >> s[0] >> s[1] >> s[2];
    map<char, int> m{{'A', 0}, {'B', 0}, {'C', 0}};
    for (int i = 0; i < 3; i++)
    {
        if (s[i][1] == '>')
        {
            m[s[i][0]]++;
            m[s[i][2]]--;
        }
        else{
            m[s[i][0]]--;
            m[s[i][2]]++;
        }
    }
    // for(auto mm:m)
    // {
    //     cout<<mm.first<<" "<<mm.second<<endl;
    // }
    char minC='1',maxC='1',midC='1';
    for(auto mm:m)
    {
        if(mm.second==2)
            maxC = mm.first;
        else if(mm.second==-2)
            minC = mm.first;
        else 
            midC = mm.first;
    }
    if(minC=='1'||maxC=='1')
        cout << "Impossible";
    else
        cout<<minC<<midC<<maxC;
    return 0;
}
