//用筛选法求100以内的素数
#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,k=0,a[100];
 
	for(i=0;i<100;i++)
	{
		a[i]=i+1;           //将1~100赋值给a[0]~a[99]
	}
 
	a[0]=0;                      //先把a[0]赋值为0
	for(i=0;i<99;i++)
	{
		for(j=i+1;j<100;j++)
		{
			if(a[i]!=0&&a[j]!=0)
			{
				if(a[j]%a[i]==0)
				{
					a[j]=0;           //把不是素数的都赋值为0
				}
			}
		}
	}
 
	printf(" 筛选法求出100以内的素数为：\n");
	for(i=0;i<100;i++)
	{
		if(a[i]!=0)                  //选出值不为0的数，即素数
		{
		  printf("%4d",a[i]);           
		  k++;
		}
		if(k%10==0)                 //输出10个数后换行
		{
			printf("\n");
		}
	}
	printf("\n");
 
	return 0;
}
————————————————
版权声明：本文为CSDN博主「路漫漫其修远兮sjw」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/s_wander/article/details/80388949