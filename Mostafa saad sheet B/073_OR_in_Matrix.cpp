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
vector<vector<int>> expected_B;
int r, c;
void edit_Exp_B(int rr, int cc)
{
    for (int i = 0; i < r; i++)
        expected_B[i][cc] = 1;
    for (int i = 0; i < c; i++)
        expected_B[rr][i] = 1;
}
int main()
{
    cin >> r >> c;
    vector<vector<int>> B(r, vector<int>(c));
    vector<vector<int>> A(r, vector<int>(c));
    expected_B = vector<vector<int>>(r, vector<int>(c));
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> B[i][j];

    for (int i = 0; i < r; i++)
    {
        bool is_one = true;
        for (int j = 0; j < c; j++)
        {
            is_one = true;
            if (B[i][j] == 0)
                continue;
            for (int k = 0; k < r; k++)
                if (B[k][j] == 0)
                {
                    is_one = false;
                    break;
                }
            if (!is_one)
                continue;
            for (int k = 0; k < c; k++)
                if (B[i][k] == 0)
                {
                    is_one = false;
                    break;
                }
            if (is_one)
            {
                A[i][j] = 1;
                edit_Exp_B(i, j);
                //cout << "i = " << i << " j = " << j << endl;
            }
                }
    }
    if (B == expected_B)
    {
        cout << "YES" << endl;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << A[i][j];
                if (j != c - 1)
                    cout << " ";
            }
            if (i != r - 1)
                cout << endl;
        }
    }
    else
        cout << "NO";

    return 0;
}