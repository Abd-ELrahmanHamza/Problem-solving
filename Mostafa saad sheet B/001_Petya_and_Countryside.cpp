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
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int maxH = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        bool foundSame = false;
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] <= v[j-1])
                count++;
            else
                break;
        }
        foundSame = false;
        for (int j = i - 1; j >= 0; j--)
        {
            if (v[j] <= v[j+1])
                count++;
            else
                break;
        }
        maxH = max(maxH, count);
        count = 0;
    }
    cout << maxH;
    return 0;
}
