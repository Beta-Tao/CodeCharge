#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string replaceSpace(string s) {
//        int count = 0, len = s.size();
//        for (auto c : s)
//        {
//            if (c == ' ')
//                count++;
//        }
//        s.resize(s.size() + 2 * count);
//        for (long i = len - 1, j = s.size() - 1; i < j; i--)
//        {
//            if (s[i] != ' ')
//            {
//                s[j] = s[i];
//                j--;
//            }
//            else
//            {
//                s[j] = '0';
//                s[--j] = '2';
//                s[--j] = '%';
//                j--;
//            }
//        }
//        return s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ')
            {
                s.replace(i, 1, "%20");
            }
        }
        return s;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main()
{
    Solution solution;

    cout << solution.replaceSpace("We are happy world.") << endl;
    
    cout << "Code Charge!" << endl;
    return 0;
}