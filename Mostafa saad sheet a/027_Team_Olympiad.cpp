#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::max;
using std::min;
using std::string;

int main()
{
    int n;
    cin >> n;
    int *arr1 = new int[n];
    int *arr2 = new int[n];
    int *arr3 = new int[n];
    int type1 = 0, type2 = 0, type3 = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        switch (x)
        {
        case 1:
            arr1[type1] = i;
            type1++;
            break;
        case 2:
            arr2[type2] = i;
            type2++;
            break;
        case 3:
            arr3[type3] = i;
            type3++;
            break;
        }
    }
    int Min = std::min(type1, std::min(type2, type3));
    cout << Min << endl;
    for (int i = 0; i < Min; i++)
    {
        cout << arr1[i]+1 << " " << arr2[i]+1 << " " << arr3[i]+1;
        if (i != n - 1)
            cout << endl;
    }
    return 0;
}