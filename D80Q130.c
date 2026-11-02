/* Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). 
Then read them using fscanf() and display each record.


Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    FILE *file;
    struct Student students[2];

    // Input student records
    for (int i = 0; i < 2; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }

    // Write records to file
    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error: Could not open students.txt for writing.\n");
        return 1;
    }
    for (int i = 0; i < 2; i++) {
        fprintf(file, "%s %d %d\n", students[i].name, students[i].roll, students[i].marks);
    }
    fclose(file);

    // Read records from file and display
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open students.txt for reading.\n");
        return 1;
    }
    printf("\nStudent Records:\n");
    while (fscanf(file, "%s %d %d", students[0].name, &students[0].roll, &students[0].marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", students[0].name, students[0].roll, students[0].marks);
    }
    fclose(file);

    return 0;
    
}