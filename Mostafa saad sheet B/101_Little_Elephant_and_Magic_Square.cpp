#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    vector<vector<int>> v(3, vector<int>(3));
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> v[i][j];
    int x = v[0][1] + v[0][2];
    int y = v[1][0] + v[1][2];
    int z = v[2][0] + v[2][1];
    v[0][0] = (x + y + z) / 2 - x;
    v[1][1] = (x + y + z) / 2 - y;
    v[2][2] = (x + y + z) / 2 - z;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << v[i][j];
            if (j != 2)
                cout << " ";
        }
        if (i != 2)
            cout << endl;
    }
    return 0;
}