#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<bool> v(n + 1);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x > n || v[x])
            count++;
        else
            v[x] = 1;
    }
    cout << count;
    return 0;
}