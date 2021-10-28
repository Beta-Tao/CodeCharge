#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)

/**
 * @brief 将数字 n 中各个数字字符出现的次数存储到长度为 10 的字符串中
 * @param n
 * @return 字符串下标对应数字字符，内容对应次数
 */
string countDigits(int n) {
    string cnt(10, 0);
    while (n) {
        ++cnt[n % 10];
        n /= 10;
    }
    return cnt;
}

unordered_set<string> powerOf2Digits;

int init = []() {
    for (int n = 1; n <= 1e9; n <<= 1) {
        powerOf2Digits.insert(countDigits(n));
    }
    return 0;
}();

class Solution {
public:
    bool reorderedPowerOf2(int n) {
//        vector<int> num_power_of_2_sorted;
//        num_power_of_2_sorted.reserve(30);
//
//        for (int i = 0; i < 30; ++i)
//        {
//            int num_power_of_2 = pow(2, i);
//            vector<int> num_tmp;
//
//            while (num_power_of_2 >= 10)
//            {
//                num_tmp.push_back(num_power_of_2 % 10);
//                num_power_of_2 /= 10;
//            }
//            num_tmp.push_back(num_power_of_2);
//
//            sort(num_tmp.begin(), num_tmp.end(),
//                 [](int a, int b){ return a > b; });
//
//            int result = 0;
//            for (auto j : num_tmp)
//            {
//                result = result * 10 + j;
//            }
//            num_power_of_2_sorted.push_back(result);
//        }
//
//        vector<int> num_tmp;
//        while (n >= 10)
//        {
//            num_tmp.push_back(n % 10);
//            n /= 10;
//        }
//        num_tmp.push_back(n);
//        sort(num_tmp.begin(), num_tmp.end(),
//             [](int a, int b){ return a > b; });
//        int result = 0;
//        for (auto num : num_tmp)
//        {
//            result = result * 10 + num;
//        }
//
//        for (auto num : num_power_of_2_sorted)
//        {
//            if (result == num)
//                return true;
//        }
//        return false;

        return powerOf2Digits.count(countDigits(n));
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main()
{
    Solution solution;

    cout << solution.reorderedPowerOf2(1024) << endl;

    cout << "Code Charge!" << endl;
    return 0;
}