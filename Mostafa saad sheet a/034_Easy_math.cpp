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
    long long n, m, a, d;
    int testCases;
    cin >> testCases;
    for (int i = 0; i < testCases; i++)
    {
        int count = 0;
        cin >> n >> m >> a >> d;
        for (int j = n; j <= m; j++)
        {
            if (j % a && j % (a + d) != 0 && j % (a + 2 * d) != 0 && j % (a + 3 * d) != 0 && j % (a + 4 * d) != 0)
                count++;
        }
        cout << count;
        if (i != testCases - 1)
            cout << endl;
    }
    return 0;
}
