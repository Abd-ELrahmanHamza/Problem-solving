#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int num = 0, r = 0, c = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> num;
            if (num == 1)
            {
                r = i + 1;
                c = j + 1;
                break;
            }
        }
        if (r != 0)
            break;
    }
    cout << abs((3 - r)) + abs((3 - c));
    return 0;
}