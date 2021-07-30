#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
#include <utility>
#include <iomanip>
#include <map>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<long long> sumV(n+1,0),sumK(n+1,0);
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        sumV[i]=sumV[i-1]+x;
    }

    for(int i=1;i<=n;i++)
        sumK[i] = sumV[i]- sumV[i - k >= 1 ? i - k : 0];
    cout << find(sumK.begin()+k,sumK.end(), *min_element(sumK.begin() + k, sumK.end()))-sumK.begin()-k+1;
    return 0;
}
