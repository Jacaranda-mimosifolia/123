#include<stdio.h>
int main()
{
	int array[6]={1,2,3,4,5,6};
	int (*p)[6];
	p=&array;
	printf("array=%p\n",array);//array ������Ԫ�صĵ�ַ 
	printf("&array=%p\n",&array);//&array ����������׵�ַ 
	printf("p=%p\n",p);//p ����������׵�ַ 
	printf("*p=%p\n",*p);//*p ������Ԫ�صĵ�ַ 
	printf("**p=%d\n",**p);//**p ������Ԫ�ص�ֵ 
	for(int i=0;i<6;i++)
		printf("array[%d]=%d\n",i,*((*p)+i));
	return 0;
}
