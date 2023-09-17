#include<stdio.h>
#include<windows.h>

// FIXED....

int main(){

    int d=1000;
    int h,m,s ;

    printf("Set the time: \n");
    scanf( "%d %d %d", &h,&m, &s);

    if(h>24 || m>60 || s>60 || h<0 || m<0 || s<0) 
   { printf("Invalid input.");
     exit(1); }

   
    while(1){
    
    if(h==0 && m==0 && s==0)
    break;
    
    
    printf("\nTime : ");
    printf("\n%02d:%02d:%02d", h,m,s);

    Sleep(d);

    system("cls");
     
     
     s--;

        

     if(s<0){
            
            m--;
            s=59;
            

            if(m<0)
            {   
                h--;
                 m=59;}
                   
             if(h<0 )
                break;
                
                
            }



        }
 

    printf("Timer has reached 00:00:00 ");
    return 0;

    }
    


    

   




