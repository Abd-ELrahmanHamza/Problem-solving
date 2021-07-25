//Die Roll
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
using std::string;

int main()
{
    int n, b, d;
    cin >> n >> b >> d;
    long long totalSize = 0;
    long long result=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x<=b)
        {
            totalSize+=x;
            if(totalSize>d)
            {
                result++;
                totalSize=0;
            }
        }
            
    }
    cout<<result;
    return 0;
}