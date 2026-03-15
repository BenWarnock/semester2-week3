
/*
 * Use the sizeof() operator to examine memory use 
 * of the pointer type
 */

#include <stdio.h>

int main( void ) {

    int *testIntPtr;
    double *p;

    printf("Int pointer size is %ld bytes\n",sizeof(testIntPtr));
    printf("Double pointer size is %ld bytes\n",sizeof(p));

    return 0;
}
