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
#include <numeric>
using namespace std;

int main()
{
    long long sum = 0;
    string a, b;
    cin >> a >> b;
    vector<int> presum(b.size() + 1);
    for (int i = 1; i < presum.size(); i++)
        presum[i] += (presum[i - 1] + (b[i - 1] - '0'));
    for (int i = 0; i < a.size(); i++)
    {
        int temp = b.size() - a.size() + 1 + i;
        if (a[i] == '0')
            sum += presum[temp] - presum[i];
        else
            sum += temp - (presum[temp] - presum[i]) - i;
    }
    cout << sum;
    return 0;
}