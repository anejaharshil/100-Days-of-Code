/* Q136:(enum) Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.


Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include <stdio.h>
int main() {
    enum Menu { ADD, SUBTRACT, MULTIPLY };
    enum Menu choice;
    int num1, num2;

    printf("Enter choice (0 for ADD, 1 for SUBTRACT, 2 for MULTIPLY): ");
    scanf("%d", &choice);
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch (choice) {
        case ADD:
            printf("%d\n", num1 + num2);
            break;
        case SUBTRACT:
            printf("%d\n", num1 - num2);
            break;
        case MULTIPLY:
            printf("%d\n", num1 * num2);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
    
}