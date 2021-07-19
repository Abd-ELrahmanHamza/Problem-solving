#include <iostream>
#include <string>
using namespace std;

int main()
{
    int calories[4], total_calories = 0, temp_char = 0;
    string strips;

    for (int i = 0; i < 4; i++)
    {
        cin >> calories[i];
    }
    cin >> strips;
    for (int i = 0; i < strips.size(); i++)
    {
        temp_char = strips[i] - '0';
        //cout<<"c="<<temp_char<<endl;
        total_calories += calories[temp_char - 1];
    }
    cout << total_calories;

    return 0;
}