//Q ttern c program
#include<stdio.h>

int main(){
//outer for loop

    for(int i = 1 ; i <= 11; i++){
        //inner for loop
        for(int j = 1; j <= 9; j++){
            //conditional statement
                if(((j==1||j==9)&&(i>2&&i<8))||
            ((i==1||i==9)&&(j>2&&j<8))||(
                (i==2||i==8)&&(j==2||j==8)
            )||(i>6&&j==i-3)){
                    printf("* ");
                }else{
                    printf("  ");
                }
        }printf("\n");
    }
    return 0;
}