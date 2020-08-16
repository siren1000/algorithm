#include<stdio.h>
void shell_sort(int *, int);
int main() {
	int arr[] = { 9,8,7,6,5,4,3,2,1};
	shell_sort(arr, 9);
	for (int i = 0; i < 9; i++)
		printf("%d\n", arr[i]);
	return 0;
}
void shell_sort(int *p, int n) {    //����Ŀ��Ϊ����
	for (int step = n / 2; step > 0; step = step / 2) { //ÿ������
		for (int i = 0; i < step; i++) {     //һ�������е�ÿ������
			for (int j = i + step; (n - j) / step >= 1; j = j + step) {  //ÿ������Ԫ�أ��ӵڶ�����ʼ
				if (p[j] < p[j - step]) { 
					int temp=p[j];
					int k;
					for (k = j - step; temp < p[k]; k = k - step) //�Ӻ���ǰ�ԱȲ����ƶ�
						p[k + step] = p[k];
					p[k + step] = temp;
				}
			}
		}
	}
}