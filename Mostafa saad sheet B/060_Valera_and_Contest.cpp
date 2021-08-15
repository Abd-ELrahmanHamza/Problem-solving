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
void solve(int s,int size)
{
    vector<int>v(size);
    while(s>0)
    {
        for(int i=0;i<size;i++)
        {
            if(s>0)
            {
                v[i]++;
                s--;
            }
            else 
                break;
        }
    }
    for(int i=0;i<size;i++)
    {
        cout<<v[i];
        if(i!=size-1)
            cout<<" ";
    }
}
int main()
{
    int n, k, l, r, sall, sk;
    cin >> n >> k >> l >> r >> sall >> sk;
    solve(sk,k);
    if(sk!=sall)
        cout<<" ";
    solve(sall-sk,n-k);
    return 0;
}