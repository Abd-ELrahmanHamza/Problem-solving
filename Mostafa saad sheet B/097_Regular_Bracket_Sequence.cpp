#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int count = 0, result = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
            count++;
        else
        {
            if (count == 0)
                result++;
            else
                count--;
        }
    }
    cout << s.size() - result - count;
    return 0;
}