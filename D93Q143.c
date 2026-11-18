/* Q143: Find and print the student with the highest marks.


Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/
#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student students[3];
    struct Student topper;
    topper.marks = -1; // Initialize with a value lower than any possible marks

    // Input details for 3 students
    for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll number: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%d", &students[i].marks);

        // Check if this student has the highest marks
        if (students[i].marks > topper.marks) {
            topper = students[i];
        }
    }

    // Print the topper's details
    printf("\nTopper: %s (Marks: %d)\n", topper.name, topper.marks);

    return 0;
    
}