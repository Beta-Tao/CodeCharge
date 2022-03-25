#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int takeApart(int a, int b)
    {
        int result = 0;
        if (a % b == 0)
        {
            result++;
            while ((a /= b) % b == 0)
            {
                result++;
            }
            return result;
        }
        else
        {
            return 0;
        }
    }

    int trailingZeroes(int n) {
        if (n == 0)
            return 0;

        int num_ten = 0, num_five = 0, num_two = 0;
        for (int num = n; num > 1; num--)
        {
            int tmp = takeApart(num, 10);
            if (tmp != 0)
                num_ten += tmp;

            int m = num / int(pow(10, tmp));
            num_five += takeApart(m, 5);
            num_two += takeApart(m, 2);
        }
        return num_ten + min(num_five, num_two);
    }
};
//leetcode submit region end(Prohibit modification and deletion)

int main(int argc, char **argv)
{
    Solution solution;
    
    cout << solution.trailingZeroes(10) << endl;

    cout << "Code Charge!" << endl;
    return 0;
}