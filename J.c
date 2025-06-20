//J pattern c program
#include<stdio.h>

int main(){
//outer for loop

    for(int i = 1 ; i <= 9; i++){
        //inner for loop
        for(int j = 1; j <= 9; j++){
            //conditional statement
                if((i==1)||(j==7&&i<8)||((i==8)&&(j==6||j==3))||((i==9)&&(j==5||j==4))||(i==7&&j==2)){
                    printf("* ");
                }else{
                    printf("  ");
                }
        }printf("\n");
    }
    return 0;
}