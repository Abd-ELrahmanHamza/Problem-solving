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
#include <sstream>
using namespace std;
vector<int> d;
int numDevisors(int num)
{
    if (d[num] != 0)
        return d[num];
    int count = 0;
    for (int i = 1; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            if (num / i == i)
                count++;
            else
                count +=2;
        }
    }
    d[num] = count;
    return count;
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    d = vector<int>(a * b * c + 1, 0);
    const unsigned long long n = 1073741824;
    unsigned long long sum = 0;
    for (int i = 1; i <= a; i++)
        for (int j = 1; j <= b; j++)
            for (int k = 1; k <= c; k++)
                sum = (sum % n + (numDevisors(i * j * k)*2) % n) % n;
                
    cout << sum/2;
    return 0;
}