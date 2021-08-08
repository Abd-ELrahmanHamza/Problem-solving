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
#include<sstream>
using namespace std;
int main()
{
    int n;
    stringstream strm;
    cin>>n;
    map<int,vector<int>> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v[x].push_back(i);
    }
    int count = 0;
    for(auto x:v)
    {
        int diff= 0;
        bool is_seq = true;
        if(x.second.size()==1)
        {
            strm<<'\n'<<x.first<<' '<<0;
            count++;
        }
        else if (x.second.size() > 1)
        {
            
            diff = x.second[1] - x.second[0];
            for (int j = 1; j < x.second.size(); j++)
            {
                if (x.second[j] - x.second[j - 1] != diff)
                {
                    is_seq = false;
                    break;
                }
            }
            if (is_seq)
            {
                strm << '\n' << x.first << ' ' << diff;
                count++;
            }
                
        }
    }
    cout<<count;
    cout<<strm.str();
    return 0;
}