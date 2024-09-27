//24. Write the algorithm and draw the flow chart to convert the temperature in °F to °C using 
//the formula °C 5(F-32) / 9 
/*Flowchart:
                                      +-----------------+
                                      |       Start      |
                                      +-----------------+
                                             |
                                             |
                                             v
                                      +-----------------+
                                      |  Input F (°F)   |
                                      +-----------------+
                                             |
                                             |
                                             v
                                      +-----------------+
                                      |  Calculate C    |
                                      |  C = 5(F-32) / 9 |
                                      +-----------------+
                                             |
                                             |
                                             v
                                      +-----------------+
                                      |  Print C (°C)   |
                                      +-----------------+
                                             |
                                             |
                                             v
                                      +-----------------+
                                      |       Stop      |
                                      +-----------------+

*/
//C program to convert temperature in °F to °C:
#include <stdio.h>

int main() {
    float F, C;

    printf("Enter temperature in °F: ");
    scanf("%f", &F);

    C = 5 * (F - 32) / 9;

    printf("Temperature in °C: %.2f\n", C);

    return 0;
}