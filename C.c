//C Pattern C program
#include<stdio.h>

int main(){

        //outer loop
        for(int i = 1; i <= 9; i++ ){
            //inner loop
            for(int j = 1 ; j <= 9; j++){
                //conditional statement
                if((j==1&&i>2&&i<8)||((i==1||i==9)&&(j>2&&j<8))
            ||((i==2||i==8)&&(j==2||j==8))){
                    printf("* ");
                }else{
                    printf("  ");
                }
            }printf("\n");
        }
        return 0;
}