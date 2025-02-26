#week02-3.py 寫LeetCode
#LeetCode 1. Two SUM
#有一堆數字nums裡面哪兩個相加，是target
#nun【i】+num[j]==target 找到i和j史的加起來是ˋtarget
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        box={}#有一個箱子，裡面放出現過的盒子
        #我們想要湊出target這個加總


        for i,num in enumerate(nums) :
            other=target - num#另外一個需要的數[可以湊出taget]的(target-num)
            if other in box:#在箱子哩，有另外一個需要的數
                return[box[other],i]#找答案
            else:#如果沒有合適的數字能湊
                box[num]=i#就出線的數字num就放到box裡面
