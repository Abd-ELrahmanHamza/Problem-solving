#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int &x : v)
        cin >> x;
    int i = 1;
    while (i < k)
        k -= i++;
    cout << v[k - 1];
    return 0;
}