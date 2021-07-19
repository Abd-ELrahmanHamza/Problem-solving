
#include <iostream>
using namespace std;

int main()
{

    int num = 0, know = 0, temp = 0, result = 0;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> temp;
            know += temp;
        }
        if (know >= 2)
            result++;
        know = 0;
    }
    cout << result;

    return 0;
}