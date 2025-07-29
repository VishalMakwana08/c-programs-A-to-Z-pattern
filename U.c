//U pattern c program
#include<stdio.h>

int main(){
//outer for loop

    for(int i = 1 ; i <= 9; i++){
        //inner for loop
        for(int j = 1; j <= 9; j++){
            //conditional statement
               if((j==1||j==9)&&(i<9)||(i==9&&j>1&&j<9)){
                    printf("* ");
                }else{
                    printf("  ");
                }
        }printf("\n");
    }
    return 0;
}