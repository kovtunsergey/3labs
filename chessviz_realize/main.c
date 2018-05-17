#include <stdio.h>
#include <stdlib.h>

void Print_desk(char Plan[9][9])
{
  for(int i=0;i<8;i++)
    {
      printf("%d|",i+1);
      for(int j=0;j<8;j++)
	{
	  printf("%c",Plan[i][j]);
	}
      printf("\n");
    }
  printf(" ");
  for(int i=0;i<8;i++)printf("%1c",i+97);
  printf("\n");
}

int main()
{
    char Plan[9][9]={
    {'L','N','B','Q','K','B','N','L'},
    {'P','P','P','P','P','P','P','P'},
    {219,' ',219,' ',219,' ',219,' '},
    {' ',219,' ',219,' ',219,' ',219},
    {219,' ',219,' ',219,' ',219,' '},
    {' ',219,' ',219,' ',219,' ',219},
    {'p','p','p','p','p','p','p','p'},
    {'l','n','b','q','k','b','n','l'}};
    
	Print_desk(Plan);
	printf("an example of course:e2-e4\n");
	while(1)
	  {
	    cahr tempxy[7];
	    printf("player 1-not caps:");
	  }
}
