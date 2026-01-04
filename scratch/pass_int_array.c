#include<stdio.h>

void print_1d(int *a,int size);
void print_2d(int (*)[5], int rows);  // since b is of type int (*)[5] means pointer to integer array of size 5. b+1 takes you to next row. why we need to tell print_2d is so that it
// can go to next row

int main(){
    int a[10]={1,2,3,4,5,6};
    int size = sizeof(a)/sizeof(a[0]);      
    printf("size of array %d\n",size);
    print_1d(a,size); // a used in an expression, what we need to read it as array decays to pointer to first element, which is an integer, so type of a - int *

    int b[2][5]={1,2,3,4,5,6};  // when b is used in expression, it decays to pointer to first element , i.e b[0] which is a 1-D elemenet array of size 5, so type of b - int(*)[5]

    // int (*b)[5], it is pointer to array of 5 ints
    // int *b[5], array of pointers to int 

    int rows = sizeof(b)/sizeof(b[0]);
    print_2d(b,rows);
}


void print_1d(int *a,int size){
    printf("printing array of size of %d\n",size);
    for(int i=0;i<size;i++){
        printf("%d\n",a[i]);         //a[i] is syntactic sugar to *(a+i)
    }
}


void print_2d(int (*b)[5], int rows){     // compiler needs to know about 5 elements in the array , for the pointer arithmetic to move 5 int elements for the next 1-D array b[1]

    int cols = sizeof(b[0])/sizeof(b[0][0]);

    for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        printf("%d\n",b[i][j]);      // b[i][j] = *(*(b+i)+j)
    }
    }
}
