/* Q132:(enum) Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.


Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/
#include <stdio.h>
int main() {
    enum TrafficLight { RED, YELLOW, GREEN };
    enum TrafficLight light;

    printf("Enter traffic light color (0 for RED, 1 for YELLOW, 2 for GREEN): ");
    scanf("%d", &light);

    switch (light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid traffic light color\n");
    }

    return 0;

}