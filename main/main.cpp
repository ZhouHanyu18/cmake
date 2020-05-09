#include <stdio.h>
#include <stdlib.h>
#include "../tools/math.h"

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
