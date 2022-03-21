#pragma clang diagnostic push
#pragma ide diagnostic ignored "altera-unroll-loops"
#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int myAtoi(string s) {
        long num = 0;
        int index = 0, sign = 1;
        /* 处理数字前数据 */
        for (index = 0; index < s.length(); index++)
        {
            if (s[index] == '.')
                return 0;
            else if (s[index] == ' ')
                continue;
            else if (s[index] == '+')
            {
                sign = 1;
                index++;
                break;
            }
            else if (s[index] == '-')
            {
                sign = -1;
                index++;
                break;
            }
            else
                break;
        }
        if (index == s.length())    // 全为无效字符
            return 0;

        for (; index < s.length(); index++)
        {
            if (s[index] < '0' || s[index] > '9')
                break;
            else
            {
                num = 10 * num + int(s[index] - '0');
                if (sign > 0 && num >= long(INT_MAX))
                    return INT_MAX;
                else if (sign < 0 && num >= -long(INT_MIN))
                    return INT_MIN;
            }
        }
        return int(sign * num);
    }
};
//leetcode submit region end(Prohibit modification and deletion)

int main(int argc, char **argv)
{
    cout << INT_MAX << endl;
    return 0;
}