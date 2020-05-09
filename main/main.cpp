#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("please input %s number: \n", argv[0]);
        return 1;
    }
    
    double input = atof(argv[1]);
    double out = sqrt(input);
    
    printf("%f sqrt is %f\n", input, out); 
}
