#include<stdio.h>

void print_s1(char *s1,int size_s1);
void print_s2(char(*)[5],int rows_s2);

int main(){
    char s1[6]="secret";
    char s2[2][5]={"vidya","sagar"};

    int size_s1 = sizeof(s1)/sizeof(s1[0]);
    int rows_s2 = sizeof(s2)/sizeof(s2[0]);

    print_s1(s1,size_s1);
    print_s2(s2,rows_s2);


}


void print_s1(char *s1, int size_s1){
   //printf("%s\n",s1);            // %s expects point to first character of null terminated string, s1 is 1-D array,
    //  s1 in expression decays to pointer to first element of the array i.e pointer to character and size not required since it prints till null termination
}


void print_s2(char (*s2)[5], int rows_s2){
    for(int i=0;i<rows_s2;i++){
        printf("%s\n",s2[i]);  //s2 is 2-D array, s2[0] is 1-D array which decays to pointer to first element of s2[0] which is pointer to character , as expected by printf 
    }
}