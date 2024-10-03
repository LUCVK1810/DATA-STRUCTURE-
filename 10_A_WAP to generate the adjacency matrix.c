#include <stdio.h>
#include <stdlib.h>
void main()
{
int **adjmatrix;
int r, c, v;
printf ("Number of vertices: ");
scanf ("%d", &v);
adjmatrix=(int **) malloc (sizeof(int **)*v); 
for (r= 0; r<v; r++)
{
adjmatrix[r] = (int*) malloc(sizeof(int)*v); 
}
 for (r= 0; r<v; r++)
{ 
for (c=0; c < v; c++) 
{
adjmatrix[r][c] = 0;
}
getch();
}
r = 0;
c=0;
printf ("Enter edge Pair V1 V2\n");
printf ("Press -1 -1 to exit\n");
do
{
printf ("Enter Pair: ");
scanf ("%d %d", &r, &c);
if (r> 0 && r<=v && c > 0 && c <= v)
{ 
adjmatrix[r-1][c-1] = 1; 
}
}while(r > 0 && c > 0);
printf("\nAdjacency matrix\n");
printf(" ");
printf("\n");
for (r = 0; r < v; r++)
{
for(c=0;c<v;c++)
{
printf("%d ",adjmatrix[r][c]);
}
printf("\n");
}
getch();
}
