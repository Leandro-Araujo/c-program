#include <stdio.h>
#include <string.h>
 
struct Data {
    int price;
    char type[20];
    char program[50];
    char str[80];
};

int main(){
    struct Data data;
    printf( "Memory size occupied by data : %d\n", sizeof(data));
    data.price = 80;
    printf("The price is %d \n", data.price);
    return 0;
};
