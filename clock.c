#include<stdio.h>
#include<windows.h>

int main(){

    int d=1000;
    int h,m,s ;

    printf("Set the time: \n");
    scanf( "%d %d %d", &h,&m, &s);

    if(h>12 || m>60 || s>60)
   { printf("Invalid input.");
     exit(0); }

    while(1){
     s++;

      if(s>59){
        s=0;
        
        m++;
        
        if(m>59){
            
            h++;
            m=0; 

            if(h>12){
                h=1;
            }
        }
      }   
     printf("\nTime : ");
    printf("\n%02d:%02d:%02d", h,m,s);

    Sleep(d);

    system("cls");



    }

   




}