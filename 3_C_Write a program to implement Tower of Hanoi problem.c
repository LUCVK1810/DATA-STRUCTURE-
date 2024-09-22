#include <stdio.h>
#include<conio.h>
 int TOH(int,char,char,char);
void main()
 {
   int n;
   int c;
  clrscr();
   printf("\nEnter number of plates:");
   scanf("%d",&n);
    c = TOH(n,'A','C','B');
    printf("\n");
    printf("Total number of moves = %d \n ", c);
 getch();
  }
  int TOH(int n,char first,char third,char second)
 {
   int count;
  if(n>0){
     count=TOH(n-1, first, second, third);
     printf("Move disk %d from peg %c to peg %c\n", n, first, third);
     count++;
     count+= TOH(n-1, second, third, first);
     }
  return count;
 }