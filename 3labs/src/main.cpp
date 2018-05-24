#include <stdio.h>
#include <string.h>
#include "print_board.h"
#include "desc.h"

int main(){
	int x1,y1,x2,y2;
	char desk[9][9]={
	{'R','H','B','Q','K','B','H','R'},
	{'P','P','P','P','P','P','P','P'},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{'p','p','p','p','p','p','p','p'},
	{'r','h','b','k','q','b','h','r'}};
	printdesk(desk);
	printf("1 игрок ходит маленькими, 2 игрок ходит большими\n");
	while(1){
		printf("1 игрок:");
		scanh(x1,y1,x2,y2,desk,1);
		desk[x2][y2]=desk[x1][y1];
		if((x1+y1)%2)desk[x1][y1]=' ';
		else desk[x1][y1]=(char)219;
		printdesk(desk);
		printf("2-игрок:");
		scanh(x1,y1,x2,y2,desk,2);
		desk[x2][y2]=desk[x1][y1];
		if((x1+y1)%2)desk[x1][y1]=' ';
		else desk[x1][y1]=(char)219;
		printdesk(desk);
	}
}
