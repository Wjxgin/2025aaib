///week03-4.cpp
///M90H44瘋狂程設不能打中文字，會變亂碼
///程式貼到CodeBlocks 再加註解
#include <stdio.h>
int main()
{
	int ans = 0;///答案加到這裡面
	///迴圈前面ans是0
	int N;///有一個整數N
	scanf("%d", &N);///讀人N
	///人類的迴圈，從1開始，<=
	for(int i=1; i<=N; i++){
		ans +=i;///迴圈中間
		修改 ANS
	}
	printf("%d",ans);
}///迴圈後面，印出ANS
