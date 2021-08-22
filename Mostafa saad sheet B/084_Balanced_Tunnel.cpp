#include <iostream>
#include <queue>
#include <set>
using namespace std;
int main()
{

    queue<int> in, out;
    set<int> s;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        in.push(x);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        out.push(x);
    }
    int count = 0;

    while (!in.empty() && !out.empty())
    {
        //            cout<<in.front()<<" "<<out.front()<<endl;
        if (in.front() == out.front())
        {
            in.pop();
            out.pop();
        }
        else
        {
            if (s.count(in.front()) == 0)
            {
                count++;
                s.insert(out.front());
                out.pop();
            }
            else
                in.pop();
        }
    }
    cout << count;
    return 0;
}
