#include<stdio.h>
int partition(int *, int, int);
void quick_sort(int *, int, int);
int main() {
	int arr[] = { 1,3,5,7,2,4,6,8,0 };
	quick_sort(arr, 0, 8);
	for (int i = 0; i < 9; i++)
		printf("%d\n", arr[i]);
	return 0;
}
void quick_sort(int *p, int low, int high) {
	if (low < high) {
		int pivot_position = partition(p, low, high);
		quick_sort(p, pivot_position + 1, high);
		quick_sort(p, low, pivot_position - 1);
	}
}
int partition(int *p, int low, int high) {
	int pivot = p[low];
	while (low < high) {
		while (low<high&&p[high]>pivot)
			--high;
		p[low] = p[high];
		while (low < high&&p[low] < pivot)
			++low;
		p[high] = p[low];
	}
	p[low] = pivot;
	return low;
}