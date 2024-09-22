#include <stdlib.h>
#include <stdio.h>
int a[10][10], b[10][10], c[10][10];
int m,n,m1,n1;
void transpose1();
void transpose2();
void create1();
void create2();
void matrixadd();
void multiply();
void main()
{
int i,j;
int opt,val, choice;
do
{
printf("\n***MAIN MENU**\n");
printf("1. Create 1st matrix\n");
printf("2. Create 2nd matrix\n");
printf("3. Addition \n");
printf("4. Multiplication \n");
printf("5. Transpose of 1st Matrix\n");
printf("6. Transpose of 2nd Matrix\n");
printf("7. Exit\n");
printf("Enter your choice:");
scanf("%d", &choice);
switch(choice)
{
case 1: create1();
break;
case 2: create2(b);
printf("The 2nd array is:");
break;
case 3: matrixadd();
break;
case 4: multiply();
break;
case 5: transpose1();
break;
case 6: transpose2();
break;
case 7: break;
}
}while(choice!=7);
}
void create1()
{
int i,j;
printf("Enter the number of rows and columns of matrix:\n");
scanf("%d%d", &m, &n);
printf("Enter the elements of a matrix:\n"); 
for (i = 0; i < m; i++)
for (j=0; j<n; j++)
scanf("%d", &a[i][j]);
printf("The 1st array is:\n"); 
for (i = 0; i < m; i++)
{ 
for (j = 0; j < n; j++)
{
printf("%d  ", a[i][j]);
}
printf("\n");
}
}
void create2()
{
int i,j;
printf("Enter the number of rows and columns of matrix:\n");
scanf("%d%d", &m1, &n1);
printf("Enter the elements of b matrix:\n");
for (i=0; i < m1; i++)
for (j=0;j<n1; j++)
scanf("%d  ", &b[i][j]);
printf("The 2nd array is:\n"); 
for (i = 0; i < m; i++)
{
for (j=0; j < n; j++)
{ 
printf("%d  ", b[i][j]);
} 
printf("\n");
}
}
void matrixadd()
{
int i,j; if(m==m1 && n==n1)
{ 
printf("Sum of entered matrices:-\n"); 
for (i=0; i < m; i++)
{ 
for (j=0; j<n; j++)
{
c[i][j]=a[i][j]+b[i][j];
printf("%d\t", c[i][j]);
} 
printf("\n"); }
}
else
{ 
printf("Order incorrect");
}}
void multiply()
{
int i,j,k,result[10][10],sum;
 if (n==m1)
{ 
for(i=0; i<m; i++)
{ 
for(j=0; j<n1; j++)
{
 for(k=0; k<m1; k++)
{
sum+=a[i][k]*b[k][j]; 
}
result[i][j]=sum; 
sum=0;
}
} 
for (i=0; i < m; i++)
{ 
for (j=0; j < n1; j++)
{
printf("%d\t", result[i][j]);
}
 printf("\n");
}
}
else
{ 
printf("Order incorrect");
 }
} 
void transpose1()
{ 
int i,j,trans[10][10]; 
for(i=0; i<m; i++)
for(j=0; j<n; j++)
{
trans[j][i] = a[i][j];
} 
for (i=0; i < m; i++)
{ 
for (j=0; j < n1; j++)
{
printf("%d\t", trans[i][j]);
}
printf("\n");
}
}
void transpose2()
{
int i,j,trans[10][10]; 
for(i=0; i<m; i++)
for(j=0; j<n; j++)
{
trans[j][i] = b[i][j];
}
for (i= 0; i < m; i++)
{ 
for (j=0; j < n1; j++) 
{  
printf("%d\t", trans[i][j]);
}
printf("\n");
}
}