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
using namespace std;
int main()
{
    int n, m;
    set<int> st;
    char x;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        int g = -1, s = -1;
        for (int j = 0; j < m; j++)
        {
            cin >> x;
            if (x == 'G')
                g = j;
            else if (x == 'S')
                s = j;
        }
        if(g>s)
        {
            cout<<-1;
            return 0;
        }
        st.insert(s-g);
    }
    cout << st.size();
    return 0;
}
