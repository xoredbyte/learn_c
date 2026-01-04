#include<stdio.h>


void main(int argc, char *argv[]){   // argv is pointer array , each pointer is pointing to a character array(string)  \
    
    char s[]="dead beef";
    printf("%s\n",s); // here s decays to pointer in an expression, %s expects a pointer , since s is array, s in expression points to first element of an array
    // , In expressions, an array decays to a pointer to its first element

    // printf when %s is there as format string expects, pointer to first element of the character array, it prints till null terminated string.




    printf("arg count-%d\n",argc);
    printf("arg values\n"); 

    printf("%p\n",(void *)argv[0]);  
    printf("%p\n",(void *)argv[1]);

    printf("%c\n",*argv[0]);
    printf("%c\n",*argv[1]);


    printf("%s\n",argv[0]);    // since argv is pointer array , argv[0] points to first element of the array i.e first string argument 
    printf("%s\n",argv[1]);

}