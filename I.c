//I pattern c program
#include<stdio.h>

int main(){
//outer for loop

    for(int i = 1 ; i <= 9; i++){
        //inner for loop
        for(int j = 1; j <=9 ; j++){
            //conditional 
                if(i==1||i==9||j==5){
                    printf("* ");
                }else{
                    printf("  ");
                }
        }printf("\n");
    }
    return 0;
}