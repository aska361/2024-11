#include <stdio.h>
int main() {
	int a[10], i, j, mindex, tm;
	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]); 
	}
	for (i = 0; i < 10 - 1; i++) {
		mindex = i;
		for (j = i + 1; j < 10; j++) {
			if(a[j] < a[mindex]) {
				mindex = j;
			}
		}
		if (mindex != i) {
			tm = a[i];
			a[i] = a[mindex];
			a[mindex] = tm;
		}
	}
	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}
