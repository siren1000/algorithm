#include<stdio.h>
void bubble_sort(int *, int n);
int main() {
	int arr[] = { 1,3,5,7,2,4,6,8,0 };
	bubble_sort(arr, 9);
	for (int i = 0; i < 9; i++)
		printf("%d\n", arr[i]);
	return 0;
}
void bubble_sort(int *p, int n) {  //ÅÅÎªÉýÐò
	for (int i = 0; i < n; i++) {
		for (int j = n - 1; j > i; j--) {
			if (p[j] < p[j - 1]) {
				int temp = p[j];
				p[j] = p[j - 1];
				p[j - 1] = temp;
			}
		}
	}
}
