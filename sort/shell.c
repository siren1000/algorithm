#include<stdio.h>
void shell_sort(int *, int);
int main() {
	int arr[] = { 9,8,7,6,5,4,3,2,1};
	shell_sort(arr, 9);
	for (int i = 0; i < 9; i++)
		printf("%d\n", arr[i]);
	return 0;
}
void shell_sort(int *p, int n) {    //排序目的为升序
	for (int step = n / 2; step > 0; step = step / 2) { //每个步长
		for (int i = 0; i < step; i++) {     //一个步长中的每个子列
			for (int j = i + step; (n - j) / step >= 1; j = j + step) {  //每个子列元素，从第二个开始
				if (p[j] < p[j - step]) { 
					int temp=p[j];
					int k;
					for (k = j - step; temp < p[k]; k = k - step) //从后向前对比并后移动
						p[k + step] = p[k];
					p[k + step] = temp;
				}
			}
		}
	}
}