#include <iostream>
using namespace std;
int main()
{
    int n, h;
    int TotalWidth = 0;
    cin >> n >> h;
    for (int i = 0; i < n; i++)
    {
        int tempH;
        cin >> tempH;
        if (tempH > h)
            TotalWidth += 2;
        else
            TotalWidth += 1;
    }
    cout << TotalWidth;
    return 0;
}