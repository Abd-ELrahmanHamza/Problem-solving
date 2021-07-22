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
    string a,b;
    cin>>a>>b;
    if(a==b)
        cout<<-1;
    else if(a.size()>b.size())
        cout<<a.size();
    else 
        cout<<b.size();
    return 0;
}
