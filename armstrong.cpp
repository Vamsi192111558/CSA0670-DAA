#include<stdio.h>
int main()
{
	int i,j,num,sum=0;
    printf("Enter the armstrong number:");
    scanf("%d",&i);
    num=i;
    while (num!=0)
		{
		j=num%10;
		sum=sum+(j*j*j);
		num=num/10;
	}
	if (sum==i)
	{
        printf("%d is an Armstrong number.",i);
    }
    else
    {
        printf("%d is not an Armstrong number.",i);
    }
    return 0;    
}
