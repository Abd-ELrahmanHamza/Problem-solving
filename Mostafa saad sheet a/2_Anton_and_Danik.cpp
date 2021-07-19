
#include <iostream>
using namespace std;

int main()
{
    int anton = 0, danik = 0, n = 0;
    char c;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        if (c == 'A')
            anton++;
        else
            danik++;
    }
    if (anton == danik)
        cout << "Friendship";
    else if (anton > danik)
        cout << "Anton";
    else
        cout << "Danik";
    return 0;
}