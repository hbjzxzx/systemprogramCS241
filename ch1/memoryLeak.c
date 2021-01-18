#include <stdlib.h>

void dummy_function(){
    int* x = malloc(10 * sizeof(int));
    x[10] = 0; //error 1 out of bound 
            //error 2 Memory Leak
}

int main(void){
    dummy_function();
    return 0;
}