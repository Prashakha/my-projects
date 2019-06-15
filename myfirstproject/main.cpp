#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int choice;
int row,column;
char turn='X';
bool draw=false;
void Display(){
 system("cls");
  printf("\n\n\t\t\t\t\t TIC TAC TOE");
  printf("\n\nplayer1 choice : X");
  printf("\n\nplayer2 choice : 0");
   printf("\n\t\t\t       |         |      ");
   printf("\n\t\t\t   %c   |    %c    |  %c   ",board[0][0],board[0][1],board[0][2]);
   printf("\n\t\t\t-------|---------|--------- ");
   printf("\n\t\t\t   %c   |    %c    |  %c   ",board[1][0],board[1][1],board[1][2]);
   printf("\n\t\t\t-------|---------|--------- ");
   printf("\n\t\t\t   %c   |    %c    |  %c   ",board[2][0],board[2][1],board[2][2]);
   printf("\n\t\t\t       |         |      ");

 }

 void player_turn(){

     if(turn=='X')
        printf("\nplayer 1 [X] turn:");
     else if(turn=='0')
        printf("\nplayer 2 [0] turn:");

    scanf("%d",&choice);

 switch(choice){

 case 1:row=0;column=0;break;
 case 2:row=0;column=1;break;
 case 3:row=0;column=2;break;
 case 4:row=1;column=0;break;
 case 5:row=1;column=1;break;
 case 6:row=1;column=2;break;
 case 7:row=2;column=0;break;
 case 8:row=2;column=1;break;
 case 9:row=2;column=2;break;
 default:
    printf("invalid choice");
    break;
 }
 if(turn=='X'&&board[row][column]!='X'&&board[row][column]!='0'){
    board[row][column]='X';
    turn='0';
     }
 else if(turn=='0'&&board[row][column]!='X'&&board[row][column]!='0'){
    board[row][column]='0';
    turn='X';
 }
 else{
    printf("box already filled!!");
    player_turn();
 }

}

 bool game_over(){
int i,j;
 for(i=0;i<3;i++){
    if(board[i][0]==board[i][1]&&board[i][0]==board[i][2] || board[0][i]==board[1][i]&& board[0][i]==board[2][i])
        return false;
 }
 if(board[0][0]==board[1][1]&&board[0][0]==board[2][2] || board[0][2]==board[1][1]&&board[0][2]==board[2][0])
        return false;

 for(i=0;i<3;i++){
    for(j=0;j<3;j++)
    if(board[i][j]!='X'&&board[i][j]!='0')
    return true;
 }

 draw==true;
 return false;
 }

 int main(){
     while(game_over()){
  Display();
  player_turn();
  Display();
  game_over();
     }
     if(turn=='X'&&draw==false)
        printf("\n\tPlayer 2 [0] wins!! congratulations");

      else  if(turn=='0'&&draw==false)
        printf("\n\tPlayer 1 [X] wins!! congratulations");
        else
            printf("GAME DRAW!!!");
  return 0;
}

