#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxValue(vector<vector<int>>& grid) {
        for (int row = 0; row < grid.size(); row++)
        {
            for (int col = 0; col < grid[0].size(); col++)
            {
                if (row == 0 && col == 0)
                    continue;

                if (row == 0)
                    grid[row][col] += grid[row][col - 1];
                else if (col == 0)
                    grid[row][col] += grid[row - 1][col];
                else
                    grid[row][col] += max(grid[row][col - 1], grid[row - 1][col]);
            }
        }
        return grid[grid.size() - 1][grid[0].size() - 1];
    }
};
//leetcode submit region end(Prohibit modification and deletion)

int main(int argc, char** argv)
{
    Solution solution;

    vector<vector<int> > grid = {{1, 3, 1}, {1, 5, 1}, {4, 2, 1}};
    cout << solution.maxValue(grid) << endl;

    return 0;
}