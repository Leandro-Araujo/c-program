#include <stdio.h>
#include <string.h>
 
void fs() {
    printf("%s \n", __func__);
};

int main(){
    
    printf("%s \n", __func__);
    fs();
};
