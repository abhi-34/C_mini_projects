#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    int number, guess , nguesses=1;
    
    srand(time(0));
    number = rand()%100 +1 ;

    // printf("The random generated num is %d \n", number);
    
    
    do{ 
        printf("Enter the number between( 0 - 100 )\n"); 
        scanf("%d", &guess);

        if(guess > number){
            printf("Enter lower number !\n");
        }

        else if(guess < number){
            printf("Enter higher number ! \n");

        }

        else{
            printf("Congratulations!!!!! \nYou got it right in %d attempts", nguesses);
        }
        
        nguesses++;

    }while(guess != number);
   
       

    return 0;
}