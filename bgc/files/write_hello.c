#include<stdio.h>

void main(){
    FILE* fp;
    fp = fopen("hello.txt","r");
    int c;

    while ((c=fgetc(fp))!=EOF){         //fgetc(fp) read a character, EOF is a macro
        printf("%c",c);
    }
    
    fclose(fp);
}