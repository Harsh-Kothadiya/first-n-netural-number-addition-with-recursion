//first n netural number addition with recursion
#include<stdio.h>
#include<conio.h>
int add(int );
void main()
{
	int no,ans;
	printf("\n\t ENTER A NUMBER : ");
	scanf("%d",&no);
	
	
	printf("\n\n----OUTPUT-----------------------\n");
	ans=add(no);
	printf("\n\t FIRST  %d NUMBER ADDITION IS : %d",no,ans);
	getch();
}
int add(int n)
{
	
	if(n>=1)
	{
		return n+add(n-1);
	}
	else
	  return 0;
	
}
