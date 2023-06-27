#include <stdio.h>

main() {
    float val1, val2, stepval1, stepval2;
    int minstepvalue, stepvalue, maxstepvalue;
    val1=0;
    val2=0;
    stepval1=8.2;
    stepval2=4.7;
    minstepvalue=0;
    maxstepvalue=50;
    stepvalue=minstepvalue;
    printf("val1\tval2");
    while (stepvalue<=maxstepvalue)
    {
        stepvalue = stepvalue + 1;
        val1 = val1 + stepval1;
        val2 = val2 + stepval2;
        printf("%d\t%d\n", val1, val2);
    }
    
}