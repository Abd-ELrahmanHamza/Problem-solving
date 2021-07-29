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
    int n;
    string s="ROYG",s2="BIVG";
    cin>>n;
    for(int i=0;i<n/2;i++)
    {
        cout<<s[i%4];
    }
    for (int i = 0; i < ceil(n / 2.0); i++)
    {
        cout << s2[i % 4];
    }
    return 0;
}
