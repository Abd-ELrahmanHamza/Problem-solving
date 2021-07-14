#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,k,count=0;
    cin>>n>>k;
    string str;
    for(int i=0;i<n;i++)
    {
        cin>>str;
        if(str.size()<k+1)
            continue;
        bool flag = true;
        for(int i=0;i<=k;i++)
        {
            flag = false;
            for(char c:str)
                if(c-'0' == i)
                {
                    flag = true;
                    break;
                }
            if(!flag)
            {
               break;
            }
        }
        if(flag)
            count++;
    }
    cout<<count;
    return 0;
}