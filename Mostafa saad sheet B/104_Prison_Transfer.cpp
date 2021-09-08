#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    int n, t, c;
    cin >> n >> t >> c;
    int count = 0, result = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x > t)
        {
            if (count >= c)
                result += count - c + 1;
            count = 0;
        }
        else
            count++;
    }
    if (count >= c)
        result += count - c + 1;
    cout << result;
    return 0;
}