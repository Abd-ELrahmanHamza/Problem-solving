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
    cin>>n;
    vector<int> v(n+1,0);
    int count =n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        v[x] = x;
        if(x==count)
        {
            for(int j=count;j>=1;j--)
            {
                if(v[j]!=0)
                {
                    cout<<v[j];
                    v[j] = 0;
                }
                else 
                {
                    break;
                }
                if(j!=1)
                    cout<<" ";
                count--;
            }
        }
        cout << endl;
    }
    return 0;
}
