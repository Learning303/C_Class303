
/*
 *
 * Example of Array In C programming to find out the average of 4 integers
*
* */
#include <stdio.h>
int main()
{
    int i,j,temp;
    int sum =0;
    int x=0;

    /* Array- declaration – length */
    int num[10];

    /* We are using a for loop to traverse through the array
     * while storing the entered values in the array
     */
        printf("Enter number:\n");
    for (x=0; x<10;x++)
    {
        scanf("%d", &num[x]);
    }
    printf("\nBefor Arrray is Printing:\n ");

    for (x=0; x<10;x++)
    {
	    printf("%d ",num[x]);
    }

    printf("\nDefine Reverse Logic :\n ");

    for(i=0,j=10-1;i<j;i++,j--)
          {

		temp=num[i];
		num[i]=num[j];
                num[j]=temp;

	}
    printf("\nAfter Arrray is Printing:\n ");

    for (x=0; x<10;x++)
    {
	    printf("%d ",num[x]);
    }

printf("\n");
    return 0;
}
