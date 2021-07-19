#include <iostream>
using namespace std;

int main()
{
    int lines_num = 0, shoots = 0, bird_num = 0, wire_num = 0;
    cin >> lines_num;
    int *birds = new int[lines_num];
    for (int i = 0; i < lines_num; i++)
    {
        cin >> birds[i];
    }
    cin >> shoots;
    for (int i = 0; i < shoots; i++)
    {
        cin >> wire_num >> bird_num;
        wire_num = wire_num - 1;
        bird_num = bird_num;
        //cout<<bird_num<<" "<<wire_num<<endl;
        //cout<<"before\n";
        //cout<<wire_num<<" "<<birds[wire_num]<<" "<<birds[wire_num+1]<<" "<<birds[wire_num-1]<<endl;
        if (wire_num + 1 == lines_num)
        {
            birds[wire_num - 1] += bird_num - 1;
            birds[wire_num] = 0;
        }
        else if (wire_num + 1 == 1)
        {
            birds[wire_num + 1] += birds[wire_num] - bird_num;
            birds[wire_num] = 0;
        }
        else
        {
            birds[wire_num + 1] += birds[wire_num] - bird_num;
            birds[wire_num - 1] += bird_num - 1;
            birds[wire_num] = 0;
        }
        //cout<<"After\n";
        //cout<<wire_num<<" "<<birds[wire_num]<<" "<<birds[wire_num+1]<<" "<<birds[wire_num-1]<<endl;
    }
    for (int i = 0; i < lines_num; i++)
    {
        cout << birds[i] << endl;
    }
    return 0;
}