//
//  main.c
//  BNRChapter7-Numbers

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    // insert code here...

    double y = 12345.6789;
    
    printf("3 * 3 + 5 * 2 = %d\n", 3 * 3 + 5 * 2);
    printf("11 / 3 = %d\n", 11 / 3);
    printf("11 / 3 = %d remainder of %d \n", 11 / 3, 11 % 3);
    printf("11 / 3.0 = %f with casting :) \n", 11 / (float)3);
    printf("11 / 3.0 = %f or w/o casting \n\n", 11 / 3.0);
    
    printf("The absolute value of -5 is %d\n\n", abs(-5));
    
    printf("y is %f in normal decimal notation\n", y);
    printf("y is %e in scientific notatiion\n\n", y);
    
    printf("y is %.2f in normal decimal notation limited to 2 places\n", y);
    printf("y is %.2e in scientific notatiion limited to 2 places\n", y);
    
    printf("sin(1) = %.3f\n\n",sin(1));
    
    return 0;
}
