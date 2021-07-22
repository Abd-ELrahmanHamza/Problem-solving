#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::max;
using std::min;
using std::pair;
using std::string;
using std::vector;
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            cout << arr[i + 1] - arr[i] << " ";
        else if (i == n - 1)
            cout << arr[i] - arr[i - 1] << " ";
        else
            cout << min(arr[i + 1] - arr[i], arr[i] - arr[i - 1]) << " ";
        cout << max(arr[n - 1] - arr[i], arr[i] - arr[0]);
        if (i != n - 1)
            cout << endl;
    }
    return 0;
}