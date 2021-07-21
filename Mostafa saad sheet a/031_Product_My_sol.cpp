#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::max;
using std::min;
using std::pair;
using std::string;
using std::vector;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    std::reverse(s1.begin(), s1.end());
    std::reverse(s2.begin(), s2.end());
    vector<int> result, mult(600, 0);
    int carry = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        carry = 0;
        for (int j = 0; j < s2.size(); j++)
        {
            int num = (s1[i] - '0') * (s2[j] - '0') + carry;
            result.push_back(num % 10);
            carry = num / 10;
        }
        result.push_back(carry);
        int carry2 = 0;
        for (int k = i; k < result.size() + i; k++)
        {
            int num = mult[k] + result[k - i]+carry2;
            mult[k] = num % 10;
            carry2 = num / 10;
        }
        result.clear();
    }
    int index = -1;
    for (int i = mult.size() - 1; i >= 0; i--)
        if (mult[i] != 0)
        {
            index = i;
            break;
        }

    for (int i = index; i >= 0; i--)
        cout << mult[i];
    return 0;
}
