#include <stdio.h>

int main(void){
    int x = 1, y = 2, z[10] = {0};
    int *ip = NULL;  /*ip is a pointer to int*/

    ip = &x; /* ip points to x*/
    y = *ip; /* y is now 1, ie) x */
    *ip = 0; /* x is now zero, ip was not altered with last declaration*/
    ip = &z[0]; /* ip points to z[0] now */
}