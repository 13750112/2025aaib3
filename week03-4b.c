//week03-4b.cpp ��2�ؼg�k
//LeetCode �ǲ߭p�e��6�D 283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0; //nums[k++] = nums[i] �o�ؼg�k
        for(int i=0; i<nums.size(); i++){ //�������@��
            if(nums[i] != 0) nums[k++] = nums[i];
        } //���u���O0���ơv�����ƥ��B��쵪�ת��᭱

        for(int i=k; i<nums.size(); i++){
            nums[i] = 0; //����,��0����
        }
    }
};
