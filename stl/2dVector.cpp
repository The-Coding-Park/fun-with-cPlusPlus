#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<vector<int>> grid(3, vector<int>(4, 10));
    // grid[1].push_back(20);
    // for (int row = 0; row < grid.size(); row++)
    // {
    //     for (int col = 0; col < grid[row].size(); col++)
    //     {
    //         cout << grid[row][col]<<" " << flush;
    //     }
    //     cout << endl;
    // }
    vector<vector<int>> table(10, vector<int>(3,1));
    for (int row = 0; row < table.size(); row++)
    {
        for (int col = 0; col < table[row].size(); col++)
        {
            cout << table[row][col] << " " << flush;
        }
        cout << endl;
    }
    return 0;
}