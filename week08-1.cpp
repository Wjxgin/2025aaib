///LeetCode 3375
///要切幾刀，才能把數字全部變成K(也就是)

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int a[101] = {};///陣列宣告，裡面都放0
        int N = nums.size();
        for(int i=0; i<N; i++){
            int now = nums[i];
            if(now<k) return -1;///有小的數，那就失敗囉，因為沒辦法完成任務，都變成K
            a[now]++;///現在的數字(統計、計數)
        }
        int ans = 0;
        for(int now=k+1; now<=100; now++){///要查看a[now]有幾個不同的數
            if(a[now]>0)ans++;
        }
        return ans;

    }
};
