#include <iostream>
using namespace std;

int main()
{
    int sh_price, dis_coin, no_sh = 1;
    cin >> sh_price >> dis_coin;
    while (true)
    {
        if (no_sh * sh_price % 10 == 0 || (no_sh * sh_price - dis_coin) % 10 == 0)
            break;
        no_sh++;
    }
    cout << no_sh;
    return 0;
}