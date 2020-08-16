#include<stdio.h>
#define N 10
#define MAX_BIT 4
void radix_sort(int *, int);
typedef struct {
	int size;
	int bit_data[N];
}Queue;//实现上只需要一个指针
int main() {
	int arr[] = { 1887,1454,3456,1768,2358,1087,4567,1129,6645,7098};
	
	radix_sort(arr, N);

	for (int i = 0; i < N; i++)
		printf("%d\n", arr[i]);
	return 0;
}
void radix_sort(int *p,int n) {
	Queue bit[10]; //分成0-9个堆，每个堆设成一个队
	int divisor = 1;
	for (int i = 0; i < MAX_BIT; i++) {
		for (int idx = 0; idx < 10; idx++)
			bit[idx].size = 0;
		divisor = divisor * 10;
		for (int j = 0; j < n; j++) {
			int temp = p[j] % divisor / (divisor / 10);
			switch (temp) {
			case 0:
				bit[0].bit_data[bit[0].size] = p[j];
				++bit[0].size;
				break;
			case 1:
				bit[1].bit_data[bit[1].size] = p[j];
				++bit[1].size;
				break;
			case 2:
				bit[2].bit_data[bit[2].size] = p[j];
				++bit[2].size;
				break;
			case 3:
				bit[3].bit_data[bit[3].size] = p[j];
				++bit[3].size;
				break;
			case 4:
				bit[4].bit_data[bit[4].size] = p[j];
				++bit[4].size;
				break;
			case 5:
				bit[5].bit_data[bit[5].size] = p[j];
				++bit[5].size;
				break;
			case 6:
				bit[6].bit_data[bit[6].size] = p[j];
				++bit[6].size;
				break;
			case 7:
				bit[7].bit_data[bit[7].size] = p[j];
				++bit[7].size;
				break;
			case 8:
				bit[8].bit_data[bit[8].size] = p[j];
				++bit[8].size;
				break;
			case 9:
				bit[9].bit_data[bit[9].size] = p[j];
				++bit[9].size;
				break;
			}
		}
		int mark = 0;
		for (int k = 0; k < 10; k++) {
			for (int l = 0; l < bit[k].size; l++) {
				p[mark] = bit[k].bit_data[l];
				++mark;
			}
		}
	}
}