#include<stdio.h>
int main()
{
	int array[3][2]={1,2,3,4,5,6};
	int (*p)[2]=array;
	for(int i=0;i<3;i++)
		for(int j=0;j<2;j++)
			printf("array[%d][%d]=%d\n",i,j,*(*(p+i)+j));
	return 0;
}
