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
using std::pair;
using std::string;
using std::vector;
int main()
{
    int n;
    cin >> n;
    vector<vector<char>> m(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char c;
            cin >> c;
            m[i].push_back(c);
        }
    }
    for (int i = 0; i < n; i++)
        if (m[i][i] != m[0][0] || m[i][n - 1 - i] != m[0][0])
        {
            cout<<"NO";
            return 0;
        }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j && j!=n-1-i)
            {
                if(m[i][j]!=m[0][1] || m[i][j]==m[0][0])
                {
                    cout << "NO";
                    return 0;
                }
            }
        }
    }
    cout<<"YES";
    return 0;
}
