#include <iostream>
using namespace std;

int main()
{
    int flag, groups = 1, num = 0, tempflag;

    cin >> num;
    cin >> flag;
    for (int i = 0; i < num - 1; i++)
    {
        cin >> tempflag;
        if (flag != tempflag)
        {
            groups++;
            flag = tempflag;
        }
    }
    cout << groups;

    return 0;
}