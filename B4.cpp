#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    char mine[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mine[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mine[i][j] == '*')
            {
                cout << "* ";
            }
            else
            {
                int countMines = 0;
                for (int k = i - 1; k <= i + 1; k++)
                {
                    for (int l = j - 1; l <= j + 1; l++)
                    {
                        if (k >= 0 && l >= 0 && k <= m - 1 && l <= n - 1)
                        {
                            if (mine[k][l] == '*') countMines++;
                        }
                    }
                }
                cout << countMines << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}
