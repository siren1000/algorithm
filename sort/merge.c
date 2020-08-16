#include<stdio.h>
#define N 10
#define MAX 50
void merge_sort(int *, int);
void merge_two(int *, int);
int main() {
	int arr[] = {10,9,8,7,6,5,4,3,2,1};
	merge_sort(arr, N);
	for (int i = 0; i < N; i++)
		printf("%d\n", arr[i]);
	return 0;
}


void merge_sort(int *p, int n) { //2way, 目的为升序，n为个数
	int i;
	for (i = 2; n / i > 0; i = i * 2) {
		for (int j = 0;n-j>=i; j = j + i) {
			merge_two(&p[j], i / 2, i / 2);
		}
	}//for
	if (i / 2 < n)
		merge_two(p, i / 2, n - i / 2);
}

void merge_two(int *p, int n_1,int n_2) { //n_1>=n_2,n_1和n_2为个数
	int arr[MAX];
	int i = 0, j = 0, k = 0;
	while (i < n_1||j < n_2) {
		if (i < n_1&&j < n_2) {
			if (p[i] <= p[j + n_1]) {
				arr[k] = p[i];
				++i;
			}
			else {
				arr[k] = p[j + n_1];
				++j;
			}
		}
		else {
			if (i >= n_1) {
				arr[k] = p[j+n_1];
				++j;
			}
			else if (j >= n_2) {
				arr[k] = p[i];
				++i;
			}
		}
		++k;
	}
	for (int i = 0; i < n_1 + n_2; i++)
		p[i] = arr[i];
}