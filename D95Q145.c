/*Q145: Return a structure containing top student's details from a function.


Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/
#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    int marks;
};

struct Student findTopStudent(struct Student students[], int size) {
    struct Student topStudent = students[0];

    for (int i = 1; i < size; i++) {
        if (students[i].marks > topStudent.marks) {
            topStudent = students[i];
        }
    }

    return topStudent;
}

int main() {
    struct Student students[3];

    // Input details for 3 students
    for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll number: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }

    // Find the top student
    struct Student topStudent = findTopStudent(students, 3);

    // Print the top student's details
    printf("\nTop Student: %s | Roll: %d | Marks: %d\n", topStudent.name, topStudent.roll_no, topStudent.marks);

    return 0;
       
}