#include<stdio.h>

//void prnarray();

void main()
{

	int a[10] = {1,2,3,4,5,6,7,8,9,10};

	int i = 0,key;
	
	printf("\nEnter key:-\n");
	scanf("%d",&key);

	while(i<10)
	{
		printf("\n");
		if(a[i]==key)
		{
			printf("\n\nFound at location %d . . . exit\n",(i+1));
			break;
		}
		else
		{
			int j;
			printf("\n");
			for(j=0;j<10;j++)
			printf("%d	",a[j]);
				
			printf("\n");
			for(j=0;j<i;j++)
			printf("\t");
			printf("|");
		}
		i++;
	}

	if(i==10)
	printf("\n\nNot found");

}
