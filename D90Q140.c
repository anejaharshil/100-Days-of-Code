/* Q140:(enum) Define a struct with enum Gender and print person's gender.


Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include <stdio.h>
enum Gender { MALE, FEMALE, OTHER };

struct Person {
    enum Gender gender;
};

int main() {
    struct Person person;

    printf("Enter gender (0 for MALE, 1 for FEMALE, 2 for OTHER): ");
    scanf("%d", &person.gender);

    switch (person.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Invalid gender\n");
    }

    return 0;
    
}