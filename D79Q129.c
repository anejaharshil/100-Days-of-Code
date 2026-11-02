/* Q129: A file numbers.txt contains a list of integers separated by spaces. 
Read all integers, compute their sum and average, and print both.


Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/
#include <stdio.h>
int main() {
    FILE *file;
    int num, sum = 0, count = 0;

    file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open numbers.txt for reading.\n");
        return 1;
    }

    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(file);

    if (count > 0) {
        double average = (double)sum / count;
        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", average);
    } else {
        printf("No integers found in the file.\n");
    }

    return 0;
    
}