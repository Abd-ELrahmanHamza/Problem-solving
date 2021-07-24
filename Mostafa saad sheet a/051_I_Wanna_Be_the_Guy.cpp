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
    int n,p,q,x;
    cin>>n>>p;
    vector<bool>v(n);
    for(int i=0;i<p;i++)
    {
        cin>>x;
        v[x-1] = 1;
    }
    cin>>q;
    for (int i = 0; i < q; i++)
    {
        cin >> x;
        v[x - 1] = 1;
    }
    for(int x:v)
        if(x==0)
        {
            cout << "Oh, my keyboard!";
            return 0;
        }
    cout << "I become the guy.";
    return 0;
}
