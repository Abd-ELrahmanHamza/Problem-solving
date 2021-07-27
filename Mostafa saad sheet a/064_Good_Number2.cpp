#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include<iterator>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::max;
using std::min;
using std::pair;
using std::string;
using std::vector;
using std::set;
int main()
{
    int n, k;
    cin >> n >> k;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s.size() < k + 1)
            continue;
        std::set<int>s1(std::begin(s),std::end(s));
        s1.erase(s1.upper_bound(k+'0'),s1.end());
        if(s1.size()==k+1)
            count++;
    }
    cout << count;
    return 0;
}
