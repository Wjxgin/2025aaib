///LeetCode 3375
///Ҫ�Ў׵������ܰє���ȫ��׃��K(Ҳ����)

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int a[101] = {};///������棬�e�涼��0
        int N = nums.size();
        for(int i=0; i<N; i++){
            int now = nums[i];
            if(now<k) return -1;///��С�Ĕ����Ǿ�ʧ���ӣ����]�k������΄գ���׃��K
            a[now]++;///�F�ڵĔ���(�yӋ��Ӌ��)
        }
        int ans = 0;
        for(int now=k+1; now<=100; now++){///Ҫ�鿴a[now]�Ўׂ���ͬ�Ĕ�
            if(a[now]>0)ans++;
        }
        return ans;

    }
};
