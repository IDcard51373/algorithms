#pragma once
#include <stdio.h>



void swap(int *a, int i, int j) {
	int temp = 0;
	temp = a[i - 1];
	a[i - 1] = a[j - 1];
	a[j - 1] = temp;
}

void output(int *a, int n) {
	for (int i = 0; i < n; i++) {
		printf(" %d", a[i]);
	}
	printf(" \n");
	
}

int perm(int *a, int i, int n) {
	if (i == n) {
		output(a, n);
		return n;
	}

	for (int j = i; j <= n; j++) {
		swap(a, i, j);
		perm(a, i + 1, n);
		swap(a, i, j);
	}
	return n;
}



void main() {
	int a[4] = { 1,2,3 ,4};
	perm(a, 1, 4);
	system("pause");
}