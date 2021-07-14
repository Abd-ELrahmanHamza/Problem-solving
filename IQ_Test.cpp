#include<iostream>
using namespace std;
int main()
{
    int arr[4][4];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            char c;
            cin>>c;
            if(c=='#')
                arr[i][j] = 1;
            else
                arr[i][j] = 0;
        }
    }
    bool state = false;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            int sum = arr[i][j] + arr[i][j + 1] + arr[i + 1][j] + arr[i + 1][j + 1];
            if (sum>= 3 || sum <=1)
            {
                state = true;
                break;
            }
                
        }
    }
    if(state)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}