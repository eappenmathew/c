// to find transpose
#include <stdio.h>

void main()
{
    int mat[3][3]={1,2,3,4,5,6,7,8,9},r,c;
    printf("Matrix\n");
    for (r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
            printf("%4d",mat[r][c]);

		}
		printf("\n");
	}
	printf("\n");
	printf("Transpose of Matrix\n");
	for (r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
            printf("%4d",mat[c][r]);

		}
		printf("\n");
	}

}
