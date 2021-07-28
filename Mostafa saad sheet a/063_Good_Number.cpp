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
    int n,k;
    cin>>n>>k;
    int count= 0;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if(s.size()<k+1)
            continue;
        vector<bool> v(k + 1, 0);
        for(int j=0;j<s.size();j++)
        {
            if(v[s[j]-'0'] == 0)
                v[s[j]-'0'] = 1;
        }
        bool good = true;
        for(int q=0;q<=k;q++)
        {
            if(!v[q])
            {
                good = false;
                break;
            }
        }
        if(good)
            count++;
    }
    cout<<count;
    return 0;
}
