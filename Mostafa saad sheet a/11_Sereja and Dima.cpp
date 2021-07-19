
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int Sereja = 0, Dima = 0, n;
    cin >> n;
    vector<int> cards(n);
    for (int i = 0; i < n; i++)
    {
        cin >> cards[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (*cards.begin() > *(cards.end() - 1))
            {
                Sereja += *cards.begin();
                cards.erase(cards.begin());
            }
            else
            {
                Sereja += *(cards.end() - 1);
                cards.erase(cards.end() - 1);
            }
        }
        else
        {
            if (*cards.begin() > *(cards.end() - 1))
            {
                Dima += *cards.begin();
                cards.erase(cards.begin());
            }
            else
            {
                Dima += *(cards.end() - 1);
                cards.erase(cards.end() - 1);
            }
        }
    }
    cout << Sereja << " " << Dima;
    return 0;
}