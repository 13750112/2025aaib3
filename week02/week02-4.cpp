/// weel02-4.cpp LeetCode�ǲ߭p�e��2�D
/// 389. Find the Difference ����Ӧr��u�t���Ӧr���v
class Solution {
public:
    char findTheDifference(string s, string t) {
       int A[256] = {}; ///�i�H�α�l�Ӹ˦r��, �k�䪺�j�A��,�N��u�@�}�l�Ū��v
       for(int i=0; i<s.length(); i++){ ///�r�ꪺfor�j��
        char c = s[i]; ///���X�r��
        A[c]++; ///��r����J��l
       }
       for(int i=0; i<t.length(); i++){ ///�r�ꪺfor�j��
        char c = t[i]; //���X�r��
        A[c]--; ///�q��l�̮��X�r��
        if(A[c]<0) return c; ///�������B�ܭt��,�N������,�ʥL
       }
       return 0; ///���|�Ψ�o��
    }
};
