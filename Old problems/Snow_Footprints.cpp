#include<iostream>
using namespace std;
int main()
{
    int n,right = 0,left =0;
    int firstR , LastL;
    string str;
    cin>>n>>str;
    for(int i=0;i<str.size();i++)
    {
        if(str[i] == 'R' && str[i-1] =='.') firstR = i+1;
        if(str[i] == 'L' && str[i+1] =='.') LastL = i+1;
        if(str[i] == 'R')
            right++;
        else if(str[i]=='L')
            left++;
    }
    if(right>=left && left!=0)
        cout<<firstR<<" "<<firstR+right-1;
    else if (right >= left && left == 0)
        cout << firstR << " " << firstR + right;
    else if (right < left && right != 0)
        cout << LastL << " " << LastL - left + 1;
    else
        cout << LastL << " " << LastL - left;
    return 0;
}