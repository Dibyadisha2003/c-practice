//Store student records as structures and sort them by name
#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};
void sortStudents(struct Student students[], int n) {
    struct Student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(students[j].name, students[j + 1].name) > 0) {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}
void displayStudents(struct Student students[], int n) {
    printf("\nSorted Student Records (By Name):\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll);
        printf("Marks: %.2f\n", students[i].marks);
    }
}
int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct Student students[n];
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    sortStudents(students, n);
    displayStudents(students, n);
    return 0;
}