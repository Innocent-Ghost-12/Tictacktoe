
#include <stdio.h>
char play[3][3];
int a,b,i,j;
char player1[40],player2[40];
int z=0;
void nextmove(){
        if (z%2 != 0)
    {
        printf("\nIt is  %s's move\n",player1);
    }
    else{
        printf("\nIt is  %s's move\n",player2);
    }
    
    printf("\nEnter the row and coloumn coordinates:\t");
    scanf(" %d,%d",&a,&b);
    // printf("\nEnter X or O :\t");
    // getchar();
    if (z%2 != 0)
    {
        play[a][b] = 'X';
    }
    else{
       play[a][b]= 'O';
    }
   // scanf(" %c",&play[a][b]);
    printf("\n");
        for (i=1; i<4; i++) {
            for (j=1; j<4; j++){
                printf("%c ",play[i][j]);
                    }
                printf("\n");
                }
                printf("\n");
    z++;
    
    
    again();
    
}
void again(){if((play[1][1] == 'O' && play [1][2] == 'O' && play[1][3] == 'O') || (play[1][1] == 'o' && play [1][2] == 'o' && play[1][3] == 'o')){
        printf("%s wins",player1);
    }
    else if((play[1][1] == 'O' && play [2][1] == 'O' && play[3][1] == 'O') || (play[1][1] == 'o' && play [2][1] == 'o' && play[3][1] == 'o')){
        printf("%s wins",player1);
    }
    else if((play[1][1] == 'O' && play [2][2] == 'O' && play[3][3] == 'O') || (play[1][1] == 'o' && play [2][2] == 'o' && play[3][3] == 'o')){
        printf("%s wins",player1);
    }
    else if((play[1][2] == 'O' && play [2][2] == 'O' && play[3][2] == 'O') || (play[1][2] == 'o' && play [2][2] == 'o' && play[3][2] == 'o')){
        printf("%s wins",player1);
    }
    else if((play[1][3] == 'O' && play [2][2] == 'O' && play[3][1] == 'O') || (play[1][3] == 'o' && play [2][2] == 'o' && play[3][1] == 'o')){
        printf("%s wins",player1);
    }
    else if((play[2][1] == 'O' && play [2][2] == 'O' && play[2][3] == 'O') || (play[2][1] == 'o' && play [2][2] == 'o' && play[2][3] == 'o')){
        printf("%s wins",player1);
    }
    else if((play[1][3] == 'O' && play [2][3] == 'O' && play[3][3] == 'O') || (play[1][3] == 'o' && play [2][3] == 'o' && play[3][3] == 'o')){
        printf("%s wins",player1);
    }
    else if((play[1][1] == 'X' && play [1][2] == 'X' && play[1][3] == 'X') || (play[1][1] == 'x' && play [1][2] == 'x' && play[1][3] == 'x')){
        printf("%s wins",player2);
    }
    else if((play[1][1] == 'X' && play [2][1] == 'X' && play[3][1] == 'X') || (play[1][1] == 'x' && play [2][1] == 'x' && play[3][1] == 'x')){
        printf("%s wins",player2);
    }
    else if((play[1][1] == 'X' && play [2][2] == 'X' && play[3][3] == 'X') || (play[1][1] == 'x' && play [2][2] == 'x' && play[3][3] == 'x')){
        printf("%s wins",player2);
    }
    else if((play[1][2] == 'X' && play [2][2] == 'X' && play[3][2] == 'X') || (play[1][2] == 'x' && play [2][2] == 'x' && play[3][2] == 'x')){
        printf("%s wins",player2);
    }
    else if((play[1][3] == 'X' && play [2][2] == 'X' && play[3][1] == 'X') || (play[1][3] == 'x' && play [2][2] == 'x' && play[3][1] == 'x')){
        printf("%s wins",player2);
    }
    else if((play[2][1] == 'X' && play [2][2] == 'X' && play[2][3] == 'X') || (play[2][1] == 'x' && play [2][2] == 'x' && play[2][3] == 'x')){
        printf("%s wins",player2);
    }
    else if((play[1][3] == 'X' && play [2][3] == 'X' && play[3][3] == 'X') || (play[1][3] == 'x' && play [2][3] == 'x' && play[3][3] == 'x')){
        printf("%s wins",player2);
    }
    else if(play[1][1] != '-' && play[1][2] != '-' && play[1][3] != '-' && play[2][1] != '-' && play[2][2] != '-' && play[2][3] != '-' && play[3][1] != '-' && play[3][2] != '-' && play[3][3] != '-' ){
        printf("Its a draw");
    }
    else{
        nextmove();
    }
    }
void main()
{int x,y;
    printf("Instructions:\n 1. Please pass on to the next player after your move\n 2. DO NOT OVERWRITE spaces already occupied by O or X\n 3. Enter location of your move in terms of 'a' as row and 'b' as column\n");

    printf("\nEnter Name of Player 1 :\t");
    scanf("%s",&player1);
    printf("\n%s will play with X\n",player1);

    printf("\nEnter Name of Player 2 :\t");
    scanf("%s",&player2);
    printf("\n%s will play with O\n",player2);

    for (i=1; i<4; i++) {
       for (j=1; j<4; j++){
           play[i][j]= '-';
       }
    }
    printf("\n********************Start********************\n");
    nextmove();

}
