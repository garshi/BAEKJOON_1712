#include<stdio.h>

int main(void) {



	int A, B, C;			// A는 고정 비용, B는 개당 발생하는 추가 비용, C는 노트북 가격
	int D;					// 지출되는 총 비용


	scanf("%d %d %d", &A, &B, &C);
	
	// A/C-B < a
	if (B >= C) printf("-1");

	else if ((A/(C-B))%2  == 0 || (A / (C - B)) % 3 == 0)  {
		int result = A /( C - B) +1;
		printf("%d", result);

	 
	}
	else {
		int result = A / (C - B) + 1;
		printf("%d", result);

	}

}