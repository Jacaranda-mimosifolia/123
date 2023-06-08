#include<stdio.h>
int main()
{
	int array[6]={1,2,3,4,5,6};
	int (*p)[6];
	p=&array;
	printf("array=%p\n",array);//array 数组首元素的地址 
	printf("&array=%p\n",&array);//&array 整个数组的首地址 
	printf("p=%p\n",p);//p 整个数组的首地址 
	printf("*p=%p\n",*p);//*p 数组首元素的地址 
	printf("**p=%d\n",**p);//**p 数组首元素的值 
	for(int i=0;i<6;i++)
		printf("array[%d]=%d\n",i,*((*p)+i));
	return 0;
}
