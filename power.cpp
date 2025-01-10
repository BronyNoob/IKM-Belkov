#include "power.h"

long long power(long long a, int n) {
    long long result = 1;
    for (int i = 0; i < n; ++i) {
        result *= a;
    }
    return result;
}
