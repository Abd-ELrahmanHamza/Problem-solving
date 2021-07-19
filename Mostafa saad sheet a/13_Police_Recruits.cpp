#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int crimes = 0, num = 0, temp;
    unsigned int recruits = 0;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cin >> temp;
        if (temp > 0)
        {
            recruits += temp;
        }
        else
        {
            if (recruits != 0)
            {
                recruits += temp;
            }
            else
            {
                crimes++;
            }
        }
    }
    cout << crimes;
    return 0;
}