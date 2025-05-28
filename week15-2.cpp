///week15-2.cpp
#include <stdio.h>
int helper(int n)
{
    int a[10] = {};///統計表，裡面都是0
    while(n>0){///剝皮法
        int now = n%10;///剝出一層皮
        a[now]++;///這個皮，多出現一次
        if( a[now] > 1 )return 1;///有找到重複的數字
        n = n / 10;///剝皮法
    }
    return 0;///都沒有提早結束，就是找不到重複的數字 沒有
}///helper()回傳0代表沒有找到，回傳1代表有找到
int main()
{
    int ans = 0;///有幾個重複的數字?
    for(int i=0; i<=9999; i++){///0000..9999
        if( helper(i)==1) ans++;
    }
    printf("%d", ans );///原來有4725個車牌號碼，有重複的數字
}
