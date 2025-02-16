//Store student records as structures and sort them by age or id
#include <stdio.h>
#include <string.h>
struct Student {
    int id;
    char name[50];
    int age;
};
void swap(struct Student *a, struct Student *b) {
    struct Student temp = *a;
    *a = *b;
    *b = temp;
}
void sortByID(struct Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].id > students[j + 1].id) {
                swap(&students[j], &students[j + 1]);
            }
        }
    }
}
void sortByAge(struct Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].age > students[j + 1].age) {
                swap(&students[j], &students[j + 1]);
            }
        }
    }
}
void displayStudents(struct Student students[], int n) {
    printf("\n%-5s %-20s %-5s\n", "ID", "Name", "Age");
    printf("--------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-5d %-20s %-5d\n", students[i].id, students[i].name, students[i].age);
    }
}
int main() {
    int n, choice;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct Student students[n];
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);  
        printf("Age: ");
        scanf("%d", &students[i].age);
    }
    printf("\nSort by:\n1. ID\n2. Age\nEnter choice: ");
    scanf("%d", &choice);
    if (choice == 1) {
        sortByID(students, n);
    } else if (choice == 2) {
        sortByAge(students, n);
    } else {
        printf("Invalid choice! Sorting by ID by default.\n");
        sortByID(students, n);
    }
    displayStudents(students, n);
    return 0;
}