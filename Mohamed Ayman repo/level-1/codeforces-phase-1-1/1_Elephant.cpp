#include<iostream>
using namespace std;
int main()
{
    int n,num =0;
    cin>>n;
    if(n<=5)
        cout<<1;
    else{
        while(n>5)
        {
            n-=5;
            num++;
        }
        cout << num + 1;
    }
    
    return 0;
}