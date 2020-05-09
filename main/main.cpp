#include <stdio.h>
#include <stdlib.h>
#include "config.h"

#ifdef USE_MYMATH
#include "tools/math.h"
#else
#include <math.h>
#endif

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("please input %s number: \n", argv[0]);
        return 1;
    }
    
    double input = atof(argv[1]);
    int n = atoi(argv[2]);
    double out = pow(input, n);
    
    printf("pow(%f, %d) is %f\n", input, n, out); 
}
