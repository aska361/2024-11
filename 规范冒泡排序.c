#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, *a, i, j, tm;
	scanf("%d", &n);
		a = (int *)malloc(n * (sizeof(int)));
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	//ð������
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				tm = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tm;
			}
		}
	}
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]); 
	}
	return 0;
}
