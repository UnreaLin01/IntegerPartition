#include<stdio.h>
#include<math.h>
#define int unsigned long long

int partition(int number,int maxIndex, int floor){
    int index = 0;
    int equalZero = 0;
    if(number > maxIndex){
        index = maxIndex;
    }else{
        index = number;
    }
    for(index; index >= 1; index--){
        if(index != maxIndex && index != number){
            for(int temp = floor; temp > 0; temp --){
                printf("                 ");
            }
        }
        printf("%3d - %3d = %3d  ", number, index, number-index);
        if(number - index == 0){
            printf("\n");
            equalZero ++;
        }else if(number - index != 0){
            equalZero += partition(number - index, index, floor + 1);         
        }
    }
    return equalZero;
}

void main(){
    int number = 0;
    printf("Input a number\n");
    scanf("%d",&number);
    printf("%2d",partition(number,number,0));
}

