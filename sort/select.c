#include<stdio.h>
void simple_selete_sort(int *, int);
int main() {
	int arr[] = { 1,3,5,7,9,2,4,6,8,10 };
	simple_selete_sort(arr, 10);
	for (int i = 0; i < 10; i++)
		printf("%d\n", arr[i]);
	return 0;
}
void simple_selete_sort(int *p, int n) {
	int temp;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (p[j] < p[i]) {
				temp = p[j];
				p[j] = p[i];
				p[i] = temp;
			}
		}
	}
}