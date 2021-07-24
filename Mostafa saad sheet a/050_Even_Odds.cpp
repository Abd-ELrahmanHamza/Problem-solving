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
    long long n,k;
    cin>>n>>k;
    long long firstHalf = n-n/2;
    if(k<=firstHalf)
        cout<<k*2-1;
    else 
        cout<<(k-firstHalf)*2;
    return 0;
}
