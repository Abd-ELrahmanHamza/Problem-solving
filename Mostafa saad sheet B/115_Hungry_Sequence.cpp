#include <iostream>
#include <algorithm>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <cmath>
#include <iomanip>
#include <map>
#include <set>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 10e5; i < 10e5 + n; i++)
        cout << i << " ";
    return 0;
}