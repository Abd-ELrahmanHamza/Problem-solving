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
    int r, c;
    cin >> r >> c;
    char ch;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> ch;
            if (ch == 'Y' || ch == 'C' || ch == 'M')
            {
                cout << "#Color";
                return 0;
            }
        }
    }
    cout << "#Black&White";
    return 0;
}
