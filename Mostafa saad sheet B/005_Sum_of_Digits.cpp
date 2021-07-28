#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    string str;
    cin >> str;
    long long sum = 0;
    int count = 0;
    while (str.size() > 1)
    {
        sum = 0;
        for (int i = 0; i < str.size(); i++)
            sum += str[i] - '0';
        str = to_string(sum);
        count++;
    }
    cout << count;
    return 0;
}