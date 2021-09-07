#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int &x : v)
        cin >> x;
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] + v[i + 1] < k)
        {
            count += k - (v[i] + v[i + 1]);
            v[i + 1] += k - (v[i] + v[i + 1]);
        }
    }
    cout << count << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i];
        if (i != n - 1)
            cout << " ";
    }
    return 0;
}