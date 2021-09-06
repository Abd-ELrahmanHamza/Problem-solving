#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a1(m);
    for (int &x : a1)
        cin >> x;
    vector<int> a2(a1);
    sort(a1.begin(), a1.end());
    int minM = 0;
    int planIndex = 0;
    for (int i = 0; i < n; i++)
    {
        if (a1[planIndex] == 0)
            planIndex++;
        minM += a1[planIndex];
        a1[planIndex]--;
    }
    int maxM = 0;
    planIndex = 0;
    for (int i = 0; i < n; i++)
    {
        int &maxElem = *max_element(a2.begin(), a2.end());
        maxM += maxElem--;
    }
    cout << maxM << " " << minM;
    return 0;
}