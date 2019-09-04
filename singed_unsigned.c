//from limits.h
#define UINT_MAX 0xffffffff /* maximum unsigned int value */
#define INT_MAX  2147483647 /* maximum (signed) int value */
            /* = 0x7fffffff */

int main() {
    int a = INT_MAX;
    //_int64 a = INT_MAX; // makes all warnings go away
    unsigned int b = UINT_MAX;
    bool c = false;

    if(a < b) // warning C4018: '<' : signed/unsigned mismatch
        c = true;
    if(a > b) // warning C4018: '<' : signed/unsigned mismatch
        c = true;
    if(a <= b) // warning C4018: '<' : signed/unsigned mismatch
        c = true;
    if(a >= b) // warning C4018: '<' : signed/unsigned mismatch
        c = true;
    if(a == b) // no warning <--- warning expected here
        c = true;
    if(((unsigned int)a) == b) // no warning (as expected)
        c = true;
    if(a == ((int)b)) // no warning (as expected)
        c = true;
        
    return 0;
}
