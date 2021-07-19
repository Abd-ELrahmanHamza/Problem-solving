#include <iostream>
using namespace std;

int main()
{
    int colors[4], shoes = 0;
    cin >> colors[0];
    for (int i = 1; i < 4; i++)
    {
        cin >> colors[i];
        for (int j = 0; j < i; j++)
        {
            if (colors[i] == colors[j])
            {
                shoes++;
                break;
            }
        }
    }
    cout << shoes;
    return 0;
}