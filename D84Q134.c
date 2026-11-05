/* Q134:(enum) Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.


Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
#include <stdio.h>
int main() {
    enum Status { SUCCESS, FAILURE, TIMEOUT };
    enum Status status;

    // Sample input for testing
    status = FAILURE; // Change this to SUCCESS or TIMEOUT to test other cases

    switch (status) {
        case SUCCESS:
            printf("Operation successful\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
        default:
            printf("Invalid status\n");
    }

    return 0;
    
}