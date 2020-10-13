#include <stdio.h>
#define N 5

int main(void) {
	int mas[N];
	float* pt = mas;
	float ch1, ch2;
	int Flag = 0;
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &mas[i]);
	}
	for (int j = N-1; j > 2; j--) {
		ch1 = *(pt+j) / *(pt + j - 1);
		ch2 = *(pt + j - 1) / *(pt + j - 2);
		if (ch1 != ch2) {
			Flag = 0;
			printf("%d ", Flag);
			exit();
		}
		
	}
	printf("%3.3f ", ch1);
	
	return 0;
}