#include <stdio.h>
struct demo{
        double d;
        int ch;
        char c;
        float f;
};
int main() {
struct demo obj;
printf("%lu",sizeof(struct demo));
    return 0;
}