#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
void removePixels(vector<vector<bool>> &arr, int r, int c, int size)
{
    if (r > size - 1 || r < 0 || c < 0 || c > size - 1)
        return;
    if (arr[r][c] == 0)
        return;
    arr[r][c] = 0;
    removePixels(arr, r, c + 1, size);
    removePixels(arr, r, c - 1, size);
    removePixels(arr, r + 1, c, size);
    removePixels(arr, r - 1, c, size);
    removePixels(arr, r - 1, c - 1, size);
    removePixels(arr, r + 1, c + 1, size);
    removePixels(arr, r - 1, c + 1, size);
    removePixels(arr, r + 1, c - 1, size);
}
int main()
{
    int n;
    int k = 1;
    while (cin >> n)
    {
        vector<vector<bool>> arr(n);
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
            {
                char x;
                cin >> x;
                bool temp = x - '0';
                arr[i].push_back(temp);
            }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i][j] == 1)
                {
                    removePixels(arr, i, j, n);
                    count++;
                }
            }
        }
        cout << "Image number " << k << " contains " << count << " war eagles." << endl;
        k++;
    }
    return 0;
}
