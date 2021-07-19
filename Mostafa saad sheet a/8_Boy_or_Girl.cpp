#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string name;
    cin >> name;
    vector<char> distinct;
    bool test = false;
    distinct.push_back(name[0]);

    for (int i = 1; i < name.size(); i++)
    {
        for (int j = 0; j < distinct.size(); j++)
        {
            if (distinct[j] == name[i])
            {
                test = true;
            }
        }
        if (test == false)
            distinct.push_back(name[i]);
        test = false;
    }
    cout << (distinct.size() % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!");
    return 0;
}