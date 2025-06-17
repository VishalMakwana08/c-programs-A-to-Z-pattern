//B Pattern C Program
#include<stdio.h>

int main(){
  //outer for loop
    for(int i=1;i<=9;i++){
        //inner for loop
        for(int j=1;j<=9;j++){
            //conditional statement
            if(j==1||((i==1||i==9||i==5)&&(j<6)||(i>1&&i<5&&j==6))||(i>5&&i<9&&j==6)){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}