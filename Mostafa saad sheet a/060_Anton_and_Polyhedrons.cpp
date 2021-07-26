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
    string s;
    cin>>n;
    long long count=0;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if (s == "Tetrahedron")
            count+=4;
        else if (s == "Cube")
            count += 6;
        else if (s == "Octahedron")
            count += 8;
        else if (s == "Dodecahedron")
            count += 12;
        else 
            count+=20;
    }
    cout<<count;
    return 0;
}
