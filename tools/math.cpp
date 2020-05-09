#include "math.h"

double pow(double a, int n) {
    double ret = 1;
    for (int i = 0; i < n; ++i) {
        ret *= a;
    }
    return ret;
}
