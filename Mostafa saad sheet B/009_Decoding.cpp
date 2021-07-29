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
    char c;
    string s1, s2;
    if (n % 2 != 0)
    {
        cin >> c;
        s2 = c;
    }
    cin >> s1;
    for (int i = 0; i < (n%2!=0?n-1:n); i++)
    {
        if (i % 2 != 0)
            s2 = s2 + s1[i];
        else
            s2 = s1[i] + s2;
    }
    cout << s2;
    return 0;
}
