#include <iostream>
#include <vector>
using namespace std;
void exchange(vector<vector<char>> &arr, int r, int c, int size, bool &inc)
{
    if (r >= size || c >= size)
        return;
    if (arr[r][c] == '.')
        return;
    if (arr[r][c] == 'x')
        inc = true;
    arr[r][c] = '.';
    exchange(arr, r + 1, c, size, inc);
    exchange(arr, r, c + 1, size, inc);
}
int main()
{
    int t, n;
    cin >> t;

    for (int p = 0; p < t; p++)
    {
        cin >> n;
        vector<vector<char>> arr(n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                char c;
                cin >> c;
                arr[i].push_back(c);
            }
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            bool found = false;
            for (int j = 0; j < n; j++)
            {
                if (arr[i][j] == 'x' || arr[i][j] == '@')
                    exchange(arr, i, j, n, found);
                if (found)
                    count++;
                found = false;
            }
        }
        cout << count;
        if (p != t - 1)
            cout << endl;
    }
    return 0;
}