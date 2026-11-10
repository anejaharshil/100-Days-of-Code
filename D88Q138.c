/* Q138:(enum) Print all enum names and integer values using a loop.


Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/
#include <stdio.h>
int main() {
    enum TrafficLight { RED, YELLOW, GREEN };
    enum TrafficLight light;

    printf("Traffic Light Enum Values:\n");
    scanf("%d", &light); // This line is not necessary for printing enum values, but included to match the input format.

    for (light = RED; light <= GREEN; light++) {
        switch (light) {
            case RED:
                printf("RED=%d\n", RED);
                break;
            case YELLOW:
                printf("YELLOW=%d\n", YELLOW);
                break;
            case GREEN:
                printf("GREEN=%d\n", GREEN);
                break;
        }
    }

    return 0;

}