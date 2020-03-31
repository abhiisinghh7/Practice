#include<stdio.h>
#include<stdlib.h>

int* cmp(int *a,int *b,int *c)
{	int i;
    for(i=0;i<3;i++)
		{
		if(a[i]>b[i])
        {c[0]=c[0]+1;}
		else if(a[i]<b[i])
			{c[1]=c[1]+1;}}
return c;}
int main(){
	int a[3],b[3];
	int i;int c[2]={0,0};
	printf("enter the element of a");
	for(i=0;i<3;i++)
	scanf("%d",&a[i]);
    printf("enter the element of b");
	for(i=0;i<3;i++)
	scanf("%d",&b[i]);
	int* ptr=cmp(a,b,c);
	printf("%d %d",ptr[0],ptr[1]);
	return 0;
	}
