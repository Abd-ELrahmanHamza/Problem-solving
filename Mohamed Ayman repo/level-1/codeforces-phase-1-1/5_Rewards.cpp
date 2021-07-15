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
    int cups = 0, medals = 0, n;
    int temp;
    for (int i = 0; i < 3; i++)
    {
        cin >> temp;
        cups += temp;
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> temp;
        medals += temp;
    }
    cin>>n;
    if((cups+4)/5 +(medals+9)/10 <=n)
        cout<<"YES";
    else 
        cout<<"NO";
    return 0;
}