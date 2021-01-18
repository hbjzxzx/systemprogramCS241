#include<pthread.h>
#include<stdio.h>

int global;

void* Thread(void* x){
    global++;
    return NULL;
}

int main(){
    pthread_t t;
    pthread_create(&t, NULL, Thread, NULL);
    global =100;
    pthread_join(t, NULL);
}