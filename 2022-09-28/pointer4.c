#include <stdio.h>

int main(){
    int i;
    double *pd;

    pd = &i;
    *pd = 36.5;
    
    printf("%lf\n", i);
    return 0;
