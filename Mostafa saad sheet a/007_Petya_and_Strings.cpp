#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char input1[101], input2[101];
    cin.getline(input1, 101);
    cin.getline(input2, 101);
    for (int i = 0; i < strlen(input1); i++)
    {
        if (isupper(input1[i]))
        {
            input1[i] = tolower(input1[i]);
        }
        if (isupper(input2[i]))
        {
            input2[i] = tolower(input2[i]);
        }
    }
    if (strcmp(input2, input1) > 0)
        cout << -1;
    else if (strcmp(input2, input1) < 0)
        cout << 1;
    else
        cout << 0;

    return 0;
}