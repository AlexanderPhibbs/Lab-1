#include <stdio.h>


int main() {
    int score;
    int counter = 0;
    int twoholder = 0;
    int thrholder = 0;
    int sixholder = 0;
    int i = 0;

    scanf("%d\n", &score);
    while (score != counter){
        if (score/2 == 0 ){
            twoholder = score / 2;
            printf("This game could have been %d safteys.\n", twoholder);
            score == counter;}
        else if (score / 3 == 0){
            thrholder = score / 3;
            printf("This game could have been %d field goals.\n", thrholder);
            i++;}
        else if(score / 6 == 0){
            sixholder = score / 6;
            printf("This game could have been %d touchdowns.\n", sixholder);
            i++;}
        else if (score % 10 == 0){
            i++;
            printf("This game must could have been one touch down and two safteys for every ten points \n or five safteys for every ten points \n or one touchdown with an extra point and a field goal for every ten points\n");
        }
        else if (score == 7 or score == 5){
            printf("This game would need safteys and a field goal\n");
            i++;}
        else if(score % 10 == 7){
            printf("This game would need a touch down and an extra point or two safteys and a field goal\n");
            i++;}
            
        else if (i >= 1){
            counter == score;
        }
    }   
    printf("These are all the possible scores of a game with the final score %d", score);
        
            

    


}