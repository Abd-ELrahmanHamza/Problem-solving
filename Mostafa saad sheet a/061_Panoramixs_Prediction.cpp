#include <iostream>
using namespace std;
int main()
{
    int n, m;
    bool state = true;
    cin >> n >> m;
    for (int i = 2; i < m; i++)
    {
        if (m % i == 0)
        {
            state = false;
            break;
        }
    }
    for (int i = n + 1; i < m; i++)
    {
        bool foundLess = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                foundLess = false;
                break;
            }
        }
        if (foundLess)
        {
            state = false;
            break;
        }
    }
    if (state)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}