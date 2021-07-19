#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int no_of_steps = 0, total_steps = 0;
    char flag = 'a';
    cin >> name;
    for (int i = 0; i < name.size(); i++)
    {
        no_of_steps = abs(name[i] - flag);
        //cout<<"no_of_steps = "<<no_of_steps<<endl;
        if (no_of_steps <= 13)
            total_steps += no_of_steps;
        else
            total_steps += 26 - no_of_steps;
        flag = name[i];
    }
    cout << total_steps;
    return 0;
}