//Y pattern c program
#include<stdio.h>

int main(){
//outer for loop

    for(int i = 1 ; i <= 9; i++){
        //inner for loop
        for(int j = 1; j <= 9; j++){
            //conditional statement
               if((i==j&&j<6)||(j==10-i&&j>5)||(j==5&&i>5)){
                    printf("* ");
                }else{
                    printf("  ");
                }
        }printf("\n");
    }
    return 0;
}