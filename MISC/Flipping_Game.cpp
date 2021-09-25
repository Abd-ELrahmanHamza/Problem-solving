#include <iostream>
#include <algorithm>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <utility>
#include <vector>
#include <set>
#include <cmath>
#include <queue>
#include <map>
#include <iomanip>
#include <stack>
#include <numeric>

using namespace std;

int helpSum(const int &x, const int &y)
{
    return x + (1 - y);
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n), oneSum(n), zeroSum(n);
    for (int &x : v)
        cin >> x;
    partial_sum(v.begin(), v.end(), oneSum.begin());
    v[0] = 1 - v[0];
    partial_sum(v.begin(), v.end(), zeroSum.begin(), helpSum);
    v[0] = 1 - v[0];
    zeroSum.insert(zeroSum.begin(), 0);
    oneSum.insert(oneSum.begin(), 0);
    if (zeroSum.back() == 0)
    {
        cout << oneSum.back() - 1;
        return 0;
    }
    //    for(int i=0;i<n;i++)
    //        cout<<oneSum[i]<<" ";
    //    cout<<endl;
    //    for(int i=0;i<n;i++)
    //        cout<<zeroSum[i]<<" ";
    //    cout<<endl;
    vector<pair<int, int>> zeroRanges;
    int maxInversions = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            int begin = i;
            while (i < n - 1 && v[i + 1] == 0)
                i++;
            zeroRanges.push_back(make_pair(begin, i));
            maxInversions = max(maxInversions, i - begin + 1);
        }
    }
    maxInversions += oneSum.back();
    //    for(int i=0;i<zeroRanges.size();i++)
    //        cout<<zeroRanges[i].first<<" "<<zeroRanges[i].second<<endl;

    for (int i = 0; i < zeroRanges.size(); i++)
    {
        int inversions;
        for (int j = i + 1; j < zeroRanges.size(); j++)
        {
            inversions = zeroSum[zeroRanges[j].second + 1] - zeroSum[zeroRanges[i].first] - (oneSum[zeroRanges[j].second + 1] - oneSum[zeroRanges[i].first]);
            //            cout<<zeroSum[zeroRanges[j].second+1]-zeroSum[zeroRanges[i].first]<<endl;
            //            cout<<(oneSum[zeroRanges[j].second+1]-oneSum[zeroRanges[i].first])<<endl;
            //            cout<<"Inversions = "<<inversions<<endl;
            maxInversions = max(maxInversions, inversions + oneSum.back());
        }
    }
    cout << maxInversions;
    return 0;
}