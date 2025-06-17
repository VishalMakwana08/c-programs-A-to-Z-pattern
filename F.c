//F pattern C program
#include<stdio.h>

int main(){
//outer loop
    for(int i=1;i<=9;i++){
        //inner loop
        for(int j=1;j<=5;j++){
            //conditions
            if(j==1||i==1||i==5){
                printf("* ");
            }else{
                printf(" ");
            }
        }printf("\n");
    }
    return 0;
}