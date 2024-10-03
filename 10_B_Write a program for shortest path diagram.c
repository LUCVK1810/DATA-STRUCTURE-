#include<stdio.h>
#define INF 999
#define size 10
void dijkstra(int A[size][size],int n,int s);
void main(){
int A[size][size],i,j,n,u;   
clrscr();
printf("Enter no. of vertices:"); //([5][5]0 10 3 0 0,0 0 1 2 0,0 4 0 8 2,0 0 0 0 7,0 0 0 9 0)
scanf("%d",&n);
printf("\n Enter the adjacency matrix:\n");
for(i=0;i<n;i++)
  for(j=0;j<n;j++)
  scanf("%d",&A[i][j]);
printf("\nEnter the strating node:");
scanf("%d",&u);
dijkstra(A,n,u);
getch();
}
void dijkstra(int A[size][size],int n,int s)
{
   int cost[size][size],dist[size],parent[size];
   int visited[size],count,mindist,next,i,j;
   for(i=0;i<n;i++)
   {
    for(j=0;j<n;j++)
    {
     if(A[i][j]==0)
       cost[i][j]=INF;
     else
	cost[i][j]=A[i][j];
    }
   }
  for(i=0;i<n;i++)
  {
  dist[i]=cost[s][i];
  parent[i]=s;
  visited[i]=0;
  }
  dist[s]=0;
  visited[i]=0;
  count=1;
  while(count<n-1)
   {
   mindist=INF;
   for(i=0;i<n;i++)
   if(dist[i]<mindist&&!visited[i])
    {
     mindist=dist[i];
     next=i;
     }
     visited[next]=1;
     for(i=0;i<n;i++)
     if(!visited[i])
     if(mindist+cost[next][i]<dist[i])
     {
      dist[i]=mindist+cost[next][i];
      parent[i]=next;
      }
      count++;
      }
      for(i=0;i<n;i++)
       {
	printf("\n Distance of node %d=%d",i,dist[i]);
	printf("\n Path=%d",i);
	j=i;
	do{
	 j=parent[j];
	 printf("<-%d",j);
	 }while(j!=s);
	 printf("\n");
	 }
}
