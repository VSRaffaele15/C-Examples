#include <stdio.h>

main() {
    int min, max, step, value;
    min=0;
    max=100;
    step=20;
    value=min;
    while (value<=max)
    {
        value = value + step;
        printf(value);
    }
    
}