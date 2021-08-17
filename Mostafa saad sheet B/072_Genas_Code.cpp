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
#include <sstream>
#include<numeric>
using namespace std;
int main()
{
    string s, nonBeautiful = "non";

    int n,ZerosNum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        vector<int> v(s.begin(),s.end());
        for(int j=0;j<v.size();j++)
            v[j]=v[j]-'0';
        int sum = accumulate(v.begin(),v.end(),0);
        if(sum==0)
        {
            cout<<0;
            return 0;
        }
        if(sum>1)
            nonBeautiful = s;
        else
        {
            int count=0;
            for(int j=v.size()-1;j>=0;j--)
            {
                if(v[j]==1)
                    break;
                count++;
            }
            ZerosNum+=count;
        }
    }
    if(nonBeautiful!="non")
        cout<<nonBeautiful;
    else 
        cout<<1;
    for(int i=0;i<ZerosNum;i++)
        cout<<0;
    return 0;
}