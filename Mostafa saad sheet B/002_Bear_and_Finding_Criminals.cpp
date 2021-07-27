#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
#include <utility>
#include <iomanip>
using namespace std;
int main()
{
    int n, a;
    cin >> n >> a;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        std::cin >> v[i];
    int count = 0;
    if (v[a - 1])
        count++;
    v[a-1] = 0;
    for (int i = 1; i < n; i++)
    {
        int exist = 0, criminals = 0;
        if (a - i - 1 >= 0 &&a-i-1!=a-1)
        {
            exist++;
            if (v[a - i - 1])
                criminals++;
            v[a - i - 1] = 0;
        }
        if (a + i - 1 < n &&a+i-1!=a-1)
        {
            exist++;
            if (v[a + i - 1])
                criminals++;
            v[a + i - 1] = 0;
        }
        if (exist == criminals && criminals != 0)
            count+=criminals;
    }
    cout << count;
    return 0;
}
