#include<stdio.h>



void main()
{
    char s[]="abc";       // char s would be wrong, 
    char *p;
    // when s used in expressions it decays to char *
    p=s;  // it is valid
    printf("%s\n",p);
    printf("%p\n",(void *)s);
    printf("%s\n",s);

    // let us create a array of strings 

    char s1[][4]={"abc","def"};        // s1[0] = "abc" and s1[1]="def"
    // here "s1" points to first element of array that is "abc" which is 1-D char array
    printf("%p\n",(void *)s1); 
    printf("%p\n",(void *)*s1); // *s1 point to first elemeent of 1-D char array ("abc") that is "a"
    printf("%c\n",**s1); // **s1 decays to first element that is "a"



    char 

}


