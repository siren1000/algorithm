#include<stdio.h>
void heap_sort(int *, int);
void build_min_heap(int *, int);
void adjust_down(int *, int, int);
int main() {
	int arr[] = { 5,3,1,4,2 ,7,8,6,10,9};
	heap_sort(arr, 10);
	for (int i = 0; i < 10; i++)
		printf("%d\n", arr[i]);
	return 0;
}
void heap_sort(int *p, int n) {//����
	build_min_heap(p, n);
	for (int i = 0; i < n; i++) {
		int temp=p[n-i-1];
		p[n-i-1] = p[0];
		p[0] = temp;
		build_min_heap(p, n - i -1 );
	}
}
void build_min_heap(int *p, int n) {
	--n;
	for (int i = n / 2; i > -1; i--)
		adjust_down(p, i, n);
}
void adjust_down(int *p, int rank, int n) { //rankλ����������������β
	int rank_use = rank + 1,n_use=n+1; //��Ǳ����0,Ϊ�˷���,�Ǳ�����ŷ���,���Ϊuse,i�������,iΪ���
	int temp=p[rank_use-1];
	for (int i = rank_use*2; i <= n_use; i = i * 2) {
		if (i<n_use && p[i-1]>p[i])
			++i;
		if (temp > p[i-1]) {
			p[rank_use-1] = p[i-1];
			rank_use = i;
		}
		else
			break;
	}//for
	p[rank_use-1] = temp;
}