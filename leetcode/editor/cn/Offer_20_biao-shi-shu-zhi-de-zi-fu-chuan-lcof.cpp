#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isNumber(string s) {

    }

    bool isInteger(string s)
    {
        if (s[0] != '+' && s[0] != '-' && (s[0] < '0' || s[0] > '9'))
        {
            return false;
        }
        for (int i = 1; i < s.length(); i++)
        {
            if (s[0] < '0' || s[0] > '9')
                return false;
        }
        return true;
    }

    bool isDecimal(string s)
    {
        auto pos = s.find('.');
        if (pos == s.npos)      // 不含小数点
            return false;
        else if (pos == 0)
        {
            return isInteger()
        }
        else
        {
            if (s[0] != '+' && s[0] != '-' && (s[0] < '0' || s[0] > '9'))
            {
                return false;
            }
            for (int i = 1; i < s.length(); i++)
            {
                if (i = )
            }
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main()
{
    Solution solution;
    
    cout << "Code Charge!" << endl;
    return 0;
}