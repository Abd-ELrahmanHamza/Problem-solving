
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, t, k, d;
    cin >> n >> t >> k >> d;
    int numberOfBaking = ceil(static_cast<float>(n) / k);
    int timeNeedByOne = numberOfBaking * t;
    int BakedDuringBuild = (t >= d ? 1 : ceil(static_cast<float>(d) / t));
    int timeNeedByTwo = ceil((numberOfBaking - BakedDuringBuild) / 2.0) * t + d;
    //cout << "timeNeedByOne = " << timeNeedByOne << " timeNeedByTwo = " << timeNeedByTwo << endl;
    if (timeNeedByTwo < timeNeedByOne && numberOfBaking != BakedDuringBuild)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}