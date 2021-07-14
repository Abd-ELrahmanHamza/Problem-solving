#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int r,c;
    char Pc;
    cin>>r>>c>>Pc;
    vector<vector<char>> arr(r);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            char c;
            cin>>c;
            arr[i].push_back(c);
        }
    }
    int PcBeginRow, PcEndRow=-1,PcBeginCol,PcEndCol=-1;
    bool found = false;
    for (int i = 0; i < r; i++)
    {
        for(int j=0;j<c;j++)
        {
            if(arr[i][j] == Pc)
            {
                //cout<<"IIIII = "<<i<<"     JJJJJJJ = "<<j<<endl;
                PcBeginRow = i;
                PcBeginCol = j;
                found = true;
                break;
            }
        }
        if(found)
            break;
    }
    for (int i = PcBeginCol; i < c; i++)
    {
        if(arr[PcBeginRow][i] != Pc)
        {
            PcEndCol = i-1;
            break;
        }            
    }
    for (int i = PcBeginRow; i < r; i++)
    {
        if (arr[i][PcBeginCol] != Pc)
        {
            PcEndRow = i - 1;
            break;
        }
    }
    if( PcEndCol==-1)
        PcEndCol = c-1;
    if( PcEndRow == -1)
        PcEndRow = r-1;
    int count = 0;
    // cout<<"begin r = "<<PcBeginRow<<endl;
    // cout << "end r = " << PcEndRow << endl;
    // cout << "begin c = " << PcBeginCol << endl;
    // cout << "end c = " << PcEndCol << endl;
    for(int i=PcBeginCol;i<=PcEndCol;i++)
    {
        if(PcBeginRow!=0)
        {
            if(arr[PcBeginRow-1][i]!='.')
            {
                if(i == PcBeginCol)
                    count++;
                else if (arr[PcBeginRow - 1][i]!=arr[PcBeginRow-1][i-1])
                    count++;
            }
        }
        if (PcEndRow != r-1)
        {
            if (arr[PcEndRow + 1][i] != '.')
            {
                if (i == PcBeginCol)
                    count++;
                else if (arr[PcEndRow + 1][i] != arr[PcEndRow + 1][i - 1])
                    count++;
            }
        }
    }
    for (int i = PcBeginRow; i <= PcEndRow; i++)
    {
        if (PcBeginCol != 0)
        {
            if (arr[i][PcBeginCol - 1] != '.')
            {
                if (i == PcBeginRow)
                    count++;
                else if (arr[i][PcBeginCol - 1] != arr[i-1][PcBeginCol - 1])
                    count++;
            }
        }
        if (PcEndCol != c - 1)
        {
            if (arr[i][PcEndCol + 1] != '.')
            {
                if (i == PcBeginRow)
                    count++;
                else if (arr[i][PcEndCol + 1] != arr[i-1][PcEndCol + 1])
                    count++;
            }
        }
    }
    cout<<count;
    return 0;
}