///week05-1.cpp
///LeetCode �ǲ߭p�eBuilt-In Function 58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s); ///��r��string��iostream��cin�ӥ�
        string word; ///�r��
        ///ss >> word; //���Ocin >>word�@��,�{�b��ss�i�H��ss >> word
        ///ss >> word; ///Ū��2��,�|Ū���2�Ӧr
        while( ss >> word ){ ///�@��Ū,���줣��Ū����
            ///�̭��ƻ�Ƴ��S����
        }
        cout << word; ///�����@�ӹ���,��Ū���

        return word.length();///�̫�,����װe�X�h
    }
};
