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
    int n;
    cin>>n;
    pair<string,int>A,B;
    cin>>A.first;
    A.second = 1;
    B.first = " ";
    B.second = 0;
    for(int i=1;i<n;i++)
    {
        string s;
        cin>>s;
        if(s==A.first)
            A.second++;
        else
        {
            B.first = s;
            B.second++;
        }
    }
    cout<<(A.second>B.second?A.first:B.first);
    return 0;
}
