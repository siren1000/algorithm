#include<stdio.h>
#define MAX 50
void insert_sort2(int *, int);
void insert_sort1(int *, int);
int main() {
	int arr[] = { 2,4,6,8,5,3,7,10,14,12 };
	insert_sort2(arr, 10);
	for (int i = 0; i < 10; i++)
		printf("%d\n", arr[i]);
	return 0;
}
void insert_sort1(int *p, int n) {    //排序结果为升序
	int temp;
	for(int i=1;i<n;i++)
		for (int j = 0; j < i; j++) {
			if (p[i] < p[j]) {
				temp = p[i];
				for (int k = i - 1; k >= j; k--)
					p[k + 1] = p[k];
				p[j] = temp;
			}
		}
}
void insert_sort2(int *p, int n) {  //排序结果为升序
	int temp;
	for (int i = 1; i < n; i++) {
		if (p[i < p[i - 1]]) {
			temp = p[i];
			int j;
			for (j = i - 1; temp < p[j]; j--)
				p[j + 1] = p[j];
			p[j+1] = temp;
		}
	}
}