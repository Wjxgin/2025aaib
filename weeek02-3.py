#week02-3.py �gLeetCode
#LeetCode 1. Two SUM
#���@��Ʀrnums�̭�����Ӭۥ[�A�Otarget
#nun�ii�j+num[j]==target ���i�Mj�v���[�_�ӬO��target
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        box={}#���@�ӽc�l�A�̭���X�{�L�����l
        #�ڭ̷Q�n��Xtarget�o�ӥ[�`


        for i,num in enumerate(nums) :
            other=target - num#�t�~�@�ӻݭn����[�i�H��Xtaget]��(target-num)
            if other in box:#�b�c�l���A���t�~�@�ӻݭn����
                return[box[other],i]#�䵪��
            else:#�p�G�S���X�A���Ʀr���
                box[num]=i#�N�X�u���Ʀrnum�N���box�̭�
