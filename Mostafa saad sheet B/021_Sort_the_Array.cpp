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
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int segment = 0, start = 1, end = 1;
    for (int i = 2; i <= n; i++)
    {
        if (a[i] < a[i - 1])
        {
            start = i - 1;
            for (; i <= n; i++)
            {
                end = i;
                if (a[i] > a[i - 1])
                {
                    end = i - 1;
                    break;
                }
            }
            if (end != 1)
            {
                segment++;
                swap(a[start], a[end]);
                i--;
            }
        }
    }
    if (segment <= 1 && a[start] > a[start - 1])
    {
        cout << "yes" << endl;
        cout << start << " " << end;
    }
    else
        cout << "no";
    return 0;
}