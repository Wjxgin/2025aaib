///week13-4.cpp
///leetcode
///a會變b,b會變c....z彙編2個字母a和b
class Solution {
public:
    int a[200000] = {};///很大的陣列，裡面都是0 會放出來的答案
    int helper(int t){///使用函式呼叫函式
        if( a[t] > 0 )return a[t];///有放答案，就把答案直接拿來用
        if(t<26) return 1;///還是1個字母
        a[t] = (helper(t-26) + helper(t-26+1)) % 1000000007;///裡面有8個0
        return a[t];
    }
    int lengthAfterTransformations(string s, int t) {
        int ans = 0;
        for(char c : s){///C++的語法，可以把每個字母取出來
            ans =( ans + helper(t+ c-'a'))%100000007;///裡面有8個0
        }
        return ans;
    }
};
