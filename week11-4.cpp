///week11-4.cpp
///LeetCode 1295
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;///
        for(int i=0; i<nums.size(); i++){
            int now = nums[i];///�{�b�n�B�z[i]
            ///Q:�p�󪾹Dnums[i]�O�X���?
            int digits = 0;///���X��ư�?
            while(now>0){///�ΤW�g�йL�B���ѤS�g�F2-3������֪k
                digits++;///�@��Ƥ@�U[�A��F�X��]
                now = now / 10;///�Ʀr�V��V�p
            }

           if(digits%2==0) ans++; ///�j��̡A���ƪ���ƮɡAans++
        }
        return ans;///�j��᭱ans���ӥ�
    }
};
