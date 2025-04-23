///week10-2.cpp
///為了下周考試[反敘數字]我們要交 %10/10剝皮法
#include <stdio.h>
int main()
{
    printf("請輸入1個數字(ex. 379):");
    int n;
    scanf("%d", &n);///讀入輸入的整數
    printf("你輸入了 %d\n", n);
    ///printf("他的個位數是 %d\n", n %10);
    ///printf("他的十位數是 %d\n", n/10 %10);
    ///printf("他的百位數是 %d\n", n/10/10 %10);
    while(n>0){///如果n還沒剝光光，就繼續剝皮
        printf("現在把%d剝皮 %d\n", n%10);
        n = n /10;///波頑皮的n變小了
    }
}
