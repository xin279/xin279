//冒泡法对10个整数排序
#include <stdio.h>
int main() {
	int a[10];
	int i,j,n;
	for (i = 0; i < 10; i++) {
		scanf_s("%d",&a[i]);	
	}
		
	for (i = 0; i <10;i++) {
		for ( j = i+1; j < 10;j++) {  //从i+1开始，若j从0开始则结果会顺序相反
			if (a[i]>a[j]) {
				n = a[i];     //用中间变量替换两个数组元素的值
				a[i] = a[j];      
				a[j] = n;   
			}
			
		}

	}
	//输出
	for (i = 0; i < 10; i++)
		printf("%d", a[i]);

}
//2022/6/26