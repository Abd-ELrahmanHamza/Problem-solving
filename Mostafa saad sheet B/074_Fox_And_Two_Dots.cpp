#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
#include <utility>
#include <iomanip>
#include <map>
#include <limits>
#include <sstream>
#include <numeric>
using namespace std;
vector<vector<char>> matrix;
vector<vector<bool>> enter, exited;

int rows, cols;
bool cycle;
bool valid(int r, int c)
{
    return (r >= 0 && r < rows && c >= 0 && c < cols);
}
void dfs(int r, int c, pair<int, int> origin)
{
    int xdir[] = {-1, 1, 0, 0}, ydir[] = {0, 0, 1, -1};
    for (int i = 0; i < 4; i++)
    {
        int r1 = r + xdir[i], c1 = c + ydir[i];
        if (valid(r1, c1) && matrix[r1][c1] == matrix[r][c])
        {
            if (enter[r1][c1] == false)
            {
                enter[r1][c1] = true;
                dfs(r1, c1, make_pair(r, c));
            }
            else if (exited[r1][c1] == false && !(r1 == origin.first && c1 == origin.second))
            {
                cycle = true;
            }
        }
    }
    exited[r][c] = true;
}
int main()
{
    cin >> rows >> cols;
    matrix = vector<vector<char>>(rows, vector<char>(cols));
    enter = vector<vector<bool>>(rows, vector<bool>(cols, false));
    exited = vector<vector<bool>>(rows, vector<bool>(cols, false));
    cycle = false;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> matrix[i][j];

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
        {
            if (!enter[i][j])
            {
                enter[i][j] = true;
                dfs(i, j, make_pair(i, j));
            }
            if (cycle)
            {
                cout << "Yes";
                return 0;
            }
        }
    cout << "No";
    return 0;
}