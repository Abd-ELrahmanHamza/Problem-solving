#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    unsigned long long n, x;
    cin >> n >> x;
    vector<int> c(n);
    for (int &y : c)
        cin >> y;
    sort(c.begin(), c.end());
    unsigned long long result = 0;
    for (int y : c)
    {
        result += x * y;
        if (x > 1)
            x--;
    }
    cout << result;
    return 0;
}