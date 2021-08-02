#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
#include <utility>
#include <iomanip>
#include <map>
#include <limits>
using namespace std;
bool checkTri(unsigned int a, unsigned int b, unsigned int c)
{
    return (a + b > c && a + c > b && b + c > a);
}
int main()
{
    int n;
    cin >> n;
    vector<unsigned int> v(n);
    for (unsigned int &x : v)
        cin >> x;
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size() - 2; i++)
        if (checkTri(v[i], v[i + 1], v[i + 2]))
        {
            cout << "YES";
            return 0;
        }
    cout << "NO";
    return 0;
}
/*

*/