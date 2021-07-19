
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int num = 0, result = 0;
    char color[50], flag;
    cin >> num;
    //cin.getline(color,num);
    for (int i = 0; i < num; i++)
    {
        cin >> color[i];
    }
    flag = color[0];
    for (int i = 1; i < num; i++)
    {
        //cout<<endl<<flag<<" "<<color[i]<<endl;
        if (flag == color[i])
        {
            result++;
        }
        flag = color[i];
    }
    cout << result;
    return 0;
}