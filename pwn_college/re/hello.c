#include<stdio.h>


void say_hello(char *s);

void main(){
    char s[1024];
    // no need to give &s , as s it self represents address
    scanf("%1000s",s);
    say_hello(s);
}

void say_hello(char *s){
    printf("hello %s\n",s);
}