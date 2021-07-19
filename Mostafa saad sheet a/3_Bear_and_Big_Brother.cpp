#include <iostream>
using namespace std;

int main()
{
    int num_years = 0;
    int limak, bob;
    cin >> limak >> bob;
    while (true)
    {
        num_years++;
        limak *= 3;
        bob *= 2;
        if (limak > bob)
            break;
    }
    cout << num_years;
    return 0;
}