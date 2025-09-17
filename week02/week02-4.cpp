/// weel02-4.cpp LeetCode學習計畫第2題
/// 389. Find the Difference 找到兩個字串「差哪個字母」
class Solution {
public:
    char findTheDifference(string s, string t) {
       int A[256] = {}; ///可以用桶子來裝字母, 右邊的大括號,代表「一開始空的」
       for(int i=0; i<s.length(); i++){ ///字串的for迴圈
        char c = s[i]; ///取出字母
        A[c]++; ///把字母放入桶子
       }
       for(int i=0; i<t.length(); i++){ ///字串的for迴圈
        char c = t[i]; //取出字母
        A[c]--; ///從桶子裡拿出字母
        if(A[c]<0) return c; ///拿光光、變負的,代表不夠用,缺他
       }
       return 0; ///不會用到這行
    }
};
