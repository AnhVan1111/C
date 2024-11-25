#include <stdio.h>
#include <string.h>

void swap_digit(char num){
    char temp = num[0];
    num[0] = num[strlen(num) - 1];
    num[strlen(num) - 1] = temp;
}

int main(){
    char num[100] = '1234';

    swap_digit(num);
    printf('%s', num);

    return 0;
}