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
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int maxIslands = ceil((n/2.0) *n);
    if(k>maxIslands)
    {
        cout<<"NO";
        return 0;
    }
    cout<<"YES"<<endl;
    char lastc ='S';
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(count<k)
            {
                if (lastc == 'S')
                {
                    count++;
                    cout << 'L';
                    lastc='L';
                }    
                else 
                {
                    cout << 'S';
                    lastc='S';
                }
            }
            else
            {
                cout << 'S';
                lastc = 'S';
            }
        }
        if(n%2==0)
            lastc = 'S'+'L'-lastc;
        if(i!=n-1)
            cout<<endl;
    }
    return 0;
}