/* Q139:(enum) Show that enums store integers by printing assigned values.


Sample Test Cases:
Input 1:
No input
Output 1:
SUCCESS=0, FAILURE=1, TIMEOUT=2

*/
#include <stdio.h>
int main() {
    enum Status { SUCCESS, FAILURE, TIMEOUT };
    enum Status status;

    printf("Enum Values:\n");
    for (status = SUCCESS; status <= TIMEOUT; status++) {
        switch (status) {
            case SUCCESS:
                printf("SUCCESS=%d\n", SUCCESS);
                break;
            case FAILURE:
                printf("FAILURE=%d\n", FAILURE);
                break;
            case TIMEOUT:
                printf("TIMEOUT=%d\n", TIMEOUT);
                break;
        }
    }

    return 0;
    
}