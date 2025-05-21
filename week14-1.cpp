//week14-1.cpp
//UVA11063 B2-Sequence Part1:Input, Part2:Output
#include <stdio.h>

int main()
{
	int a[100];
	int N, t=1;
	while( scanf("%d", &N) == 1 ){//part1
		int bad = 0;//not bad
		for(int i=0; i<N; i++){//part 1: Input
			scanf("%d", &a[i] );//part 1; Input
		//part 2: Output
		if(bad==0) printf("Case #%d: It is a B2-Sequence.\n\n", t);
		else  printf("Case #%d: It is not a B2-Sequence.\n\n", t);
		t++;
	}
}
