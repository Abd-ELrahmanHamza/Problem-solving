#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str,resultStr="";
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        if(str.substr(i,3) == "WUB")
        {
            i = i + 2;
            if(resultStr!="" && resultStr.back()!=' ')
                resultStr+=" ";
        }
        else{
            resultStr += str[i];
        }
    }
    while(resultStr.back()==' ')
        resultStr =resultStr.substr(0,resultStr.size()-1);
    cout<<resultStr;
    return 0;
}