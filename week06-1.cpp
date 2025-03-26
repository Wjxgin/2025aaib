///LeetCode 2033
class Solution {
public:                                ///grid[i][j]
    int minOperations(vector<vector<int>>& grid, int x) {
        int M = grid.size(), N = grid[0].size(), MN = M*N;
        vector<int> a(MN);///C++���}�CA�A�j�p��M*N
        for(int i=0; i<M; i++){///����I
            for(int j=0; j<N; j++){///�k��J
                int k = i*N+j;///��촫��
                a[k] = grid[i][j];///���Ӫ��}�C�A��JA
            }
        }///�e���A��grid[i][j]�o��ơA��J²�檺�}�Ca[k]
        sort(a.begin(), a.end());///�Ʀr�p��j�Ʀn
        int mid = a[MN/2];///��������(�C�ӤH�A�n���������Ʀr����)
        int ans = 0; ///�j��e��ans=0
        for(int k=0; k<MN; k++){
            int diff = abs(mid-a[k]);///�{�b�o��A�������h��?
            if(diff%x !=0)return -1;///���դp�����A����㰣�A�|����
            ans += diff / x;
        }///�j���ح��A�⵪��
        return ans;///�j��᭱�A���׮��ӥ�
    }
};
