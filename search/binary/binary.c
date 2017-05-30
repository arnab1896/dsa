#include<stdio.h>

//void prnarray();

void main()
{

	int a[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

	int i = 0,key;
	
	printf("\nEnter key:-\n");
	scanf("%d",&key);

	int lb,ub,mid;			//lower bound,upper bound
	
	lb = 0;  ub = 19;
	mid = ( lb + ub ) / 2;
	
	while( lb < ub )
	{
	
		printf("\nlow_bound = %d			mid = %d		upp_bound = %d\n", lb , mid , ub);
		
		
		if(key > a[mid])
		{
			lb = mid + 1;
			mid = ( lb + ub ) / 2;
			printf("\nlow_bound = %d			mid = %d		upp_bound = %d\n", lb , mid , ub);
		}
		
		if(key < a[mid])
		{
			ub = mid - 1;
			mid = ( lb + ub ) / 2;
			printf("\nlow_bound = %d			mid = %d		upp_bound = %d\n", lb , mid , ub);
		}
		
		if( key == a[mid] )
		{
			printf("\nFound the key at position %d   ...exit\n\n", ( mid + 1 ) );
			break;
		}
		
		if ( lb == ub )
		{
				printf("\nNot found\n");
				break;
		}
		
		
		
	}
	
}
