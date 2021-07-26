#include <iostream>
#include <vector>
#include <iomanip>
#include <utility>
using namespace std;
bool pathToEnd(vector<vector<char>> &arr, int r, int c, int maxR, int maxC, int index)
{
    string path = "IEHOVA#";
    if (r < 0 || r > maxR - 1 || c < 0 || c > maxC - 1)
        return false;
    if (arr[r][c] == '#')
        return true;
    if (r != 0 && arr[r - 1][c] == path[index])
    {
        if (pathToEnd(arr, r - 1, c, maxR, maxC, index + 1))
        {
            cout << "forth ";
            return true;
        }
    }
    else if (c != 0 && arr[r][c - 1] == path[index])
    {
        if (pathToEnd(arr, r, c - 1, maxR, maxC, index + 1))
        {
            cout << "left ";
            return true;
        }
    }
    else if (c != maxC - 1 && arr[r][c + 1] == path[index])
    {
        if (pathToEnd(arr, r, c + 1, maxR, maxC, index + 1))
        {
            cout << "right ";
            return true;
        }
    }
    return false;
}
int main()
{
    int r, c;
    int testCases = 0;
    cin >> testCases;
    for (int q = 0; q < testCases; q++)
    {
        cin >> r >> c;
        vector<vector<char>> arr(r);
        pair<int, int> start;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                char c;
                cin >> c;
                if (c == '@')
                {
                    start.first = i;
                    start.second = j;
                }
                arr[i].push_back(c);
            }
        }
        pathToEnd(arr, start.first, start.second, r, c, 0);
    }
    return 0;
}
