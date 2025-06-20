//G pattern c program
#include<stdio.h>

int main(){
    //outer loop
    for(int i = 1 ; i <= 9 ; i++){
        //outer loop
        for(int j=1;j<=9;j++){
            if((j==1&&i>2&&i<8)||((i==1||i==9)&&(j==3))||((i==2||i==8)&&(j==2))||
        ((i==1||i==9)&&(j>3&&j<9))||(i==2&&j==9)||(j==9&&i>5)||(i==5&&j>5)){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
        
    }
    return 0;
}