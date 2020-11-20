#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int transPrint(int (*ptr)[2], int row, int col);


int main()
{
	printf("Transpose The Matrix\n");
	int Matrix[2][2];
	int rows ,cols;
	printf("Enter rows:");
	scanf("%d", &rows);
	printf("Enter cols:");
	scanf("%d", &cols);

	// Enter data:
	printf("Enter the elements :\n");

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			scanf("%d",&Matrix[i][j]);
		}
	}

	// Print before transpose:
	printf("Before transpose :\n");
	for(int i = 0; i < rows ; i++)
	{
		for(int j = 0 ; j < cols ; j++)
		{
			printf("%d  ",Matrix[i][j] );
		}
		printf("\n");
	}

	// Transpose & print:
	transPrint(Matrix,rows,cols);	
	

	return 0;
}

int transPrint(int (*ptr)[2], int row, int col)
{
   int i, j;
   int transpose[2][2];

   for(i = 0; i < row; i++)
   { 
        for(j = 0; j < col; j++){

            transpose[j][i] = (*ptr)[j];  
   }
     ptr++;
    }

   printf("\nTranspose of matrix:\n");

   for(i = 0; i < col; i++){
        for(j = 0; j < row; j++){
            printf("%d  ", transpose[i][j]);
        }
       printf("\n");
    }
 }