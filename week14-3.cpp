//week14-3.cpp
#include <stdio.h>
int main()
{
	int ans = 0,now;
	while( scanf("%d", &now)==1 ){
		if(now==0) break;
		if(now>0) ans += now;
	}
	printf("%d", ans);
}
