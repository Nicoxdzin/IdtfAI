#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdio.h>
#include <math.h>

double standardDeviation() {
    int arr[] = {446, 450, 554, 547, 486, 498, 440, 560, 451, 568};
    double sum = 0;
    int i = 0;

    for(i = 0; i < 10; i++){
        double aux = arr[i] - 500;
        double calc = aux * aux;
        sum = sum + calc;
    }
    double variance = sum / (i -1);
    double standard_deviation = sqrt(variance);
    printf("%f\n", sum);
    printf("%f\n", variance);
    printf("%f", standard_deviation);

    return standard_deviation;
}



#endif