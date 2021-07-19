#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (vector<int>::iterator it = arr.begin(); it != arr.end(); it++)
    {
        cin >> (*it);
    }

    sort(arr.begin(), arr.end());
    for (vector<int>::iterator it = arr.begin(); it != arr.end(); it++)
    {
        cout << (*it) << " ";
    }
}