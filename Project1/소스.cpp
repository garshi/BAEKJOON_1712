#include<stdio.h>

int main(void) {



	int A, B, C;			// A�� ���� ���, B�� ���� �߻��ϴ� �߰� ���, C�� ��Ʈ�� ����
	int D;					// ����Ǵ� �� ���


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