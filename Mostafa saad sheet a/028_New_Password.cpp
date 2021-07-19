#include <iostream>
using std::cin;
using std::cout;
using std::string;
int main()
{
    int n, k;
    cin >> n >> k;
    string str = "";
    for (int i = 0; i < n; i++)
        str += static_cast<char>('a' + (i % k));
    cout << str;
    return 0;
}