#include<stdio.h>

void fake_main(int argc, char **argv);
int main(){
    int argc=2;
    char arg0[]="hello";     
    char arg1[]="world";
    char *argv[]={arg0,arg1};      //char *argv[] means, array of character pointer, and fittingly arg0 and arg1 names in expression decays to pointer to first element respectively.
    fake_main(argc,argv);  // argv is an pointer to array of char pointers,  when used in expression decays to pointer to first element. first element is pointer to char.
    // hence , argv decays to pointer to pointer to char.

}

// char argv[] decays to pointer to char , add a * , it decays to pointer to pointer to char. Hence char **argv & char *argv[] are same

void fake_main(int argc,char **argv){   
    printf("%s\n",argv[0]);     // treat argv[0] as pointer arithmetic, syntactic sugar equal to *(argv+0)
    printf("%s\n",argv[1]); 
    printf("%s\n",*(argv+0));
    printf("%s\n",*(argv+1)); // since argv is pointer to pointer, but still a pointer , argv+1 takes you next pointer  , since argv is of type **, %s expects single pointer ,dereference it
}          // argv + 1 moves to the next char * because pointer arithmetic advances by sizeof(*argv)

