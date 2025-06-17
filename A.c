//A pattern c program
#include<stdio.h>

int main(){
//outer for loop

    for(int i = 1 ; i <= 9; i++){
        //inner for loop
        for(int j = 1; j <= 9; j++){
            //conditional statement
                if((i>4&&(j==2||j==8))||(i==1&&j==5)||
                (i==5&&(j>1&&j<9))||(i==2&&(j==4||j==6))
                ||(i==3&&(j==3||j==7)||(i==4&&(j==2||j==8)))){
                    printf("* ");
                }else{
                    printf("  ");
                }
        }printf("\n");
    }
    return 0;
}