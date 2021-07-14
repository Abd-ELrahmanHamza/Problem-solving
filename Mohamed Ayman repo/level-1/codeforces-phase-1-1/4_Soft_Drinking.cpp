#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    cout<<std::min(std::min( (l*k/nl) , c*d),p/np)/n;
    return 0;
}