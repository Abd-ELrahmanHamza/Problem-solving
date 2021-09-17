#include <iostream>
#include <algorithm>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <utility>
#include <vector>
#include <set>
#include <cmath>
#include <queue>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k1, k2;
    cin >> k1;
    queue<int> q1, q2;
    for (int i = 0; i < k1; i++)
    {
        int x;
        cin >> x;
        q1.push(x);
    }
    cin >> k2;
    for (int i = 0; i < k2; i++)
    {
        int x;
        cin >> x;
        q2.push(x);
    }

    int count = 0;
    while (!q1.empty() && !q2.empty())
    {
        count++;
        int num1 = q1.front();
        int num2 = q2.front();
        if (num1 > num2)
        {
            q1.push(num2);
            q1.push(num1);
        }
        else
        {
            q2.push(num1);
            q2.push(num2);
        }
        q1.pop();
        q2.pop();
        if (count > 10e5)
        {
            cout << -1;
            return 0;
        }
    }
    cout << count << " ";
    if (q1.empty())
        cout << 2;
    else
        cout << 1;
    return 0;
}