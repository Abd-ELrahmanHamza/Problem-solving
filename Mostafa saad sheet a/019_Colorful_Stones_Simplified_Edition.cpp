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
    string s1,s2;
    cin>>s1>>s2;
    int j=0;
    for(int i=0;i<s2.size() && j<s1.size();i++)
        if(s2[i]==s1[j])
            j++;
    cout<<j+1;
    return 0;
}