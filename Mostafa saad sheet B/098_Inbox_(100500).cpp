#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> ones;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x)
            ones.push_back(i);
    }
    int result = (ones.size() == 0 ? 0 : 1);
    for (int i = 1; i < ones.size(); i++)
        if (ones[i] - ones[i - 1] == 1)
            result++;
        else
            result += 2;
    cout << result;
    return 0;
}