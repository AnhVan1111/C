#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./student.h"
//task 5
void highestGpa(int numOfStudents, struct Students student[numOfStudents]) { 
// hàm void: không trả về bất kỳ giá trị nào
/* hàm void highestGpa nhận 2 đối số: 
        numofStudents là biểu thị số lượng sinh viên trong mảng, 
        struct Students là mảng các đối tượng biểu thị dữ liệu*/
    float max = student[0].gpa;
    char *name = student[0].fullName;
    for (int i = 0; i < numOfStudents; i++) {
        if (student[i].gpa > max) {
            max = student[i].gpa;
            name = student[i].fullName;
        }
    }
    printf("-The student has highest GPA: %s\n", name);
}
void lowestGpa(int numOfStudents, struct Students student[numOfStudents]) {
    float min = student[0].gpa;
    char *name = student[0].fullName;
    for (int i = 0; i < numOfStudents; i++) {
        if (student[i].gpa < min) {
            min = student[i].gpa;
            name = student[i].fullName;
        }
    }
    printf("-The student has lowest GPA: %s\n", name);
}
void highestBpGrade(int numOfStudents, struct Students student[numOfStudents]) {
    float max = student[0].basicProgramming;
    char *name = student[0].fullName;
    for (int i = 0; i < numOfStudents; i++) {
        if (student[i].basicProgramming > max) {
            max = student[i].basicProgramming;
            name = student[i].fullName;
        }
    }
    printf("-The student has highest Basic Programming grade: %s\n", name);
}
//task 1
int main() {
    // Enter the number Students
    int numOfStudents;
    printf("Enter number of students: ");
    scanf("%d", &numOfStudents);
    struct Students student[numOfStudents];

    // Enter Student Information
    for (int i = 0; i < numOfStudents; i++)
    {
        student[i].studentID = malloc(100); // cấp bộ nhớ động
        student[i].fullName = malloc(100);
        student[i].birthdate = malloc(100);
        printf("\nEnter information for student %d:\n", i + 1);
        printf("Student ID: ");
        scanf("%s", student[i].studentID);
        getchar(); // xóa dấu cách, không xuống dòng
        printf("Full name: ");
        fgets(student[i].fullName, 100, stdin); //stdin: nhập từ bàn phím
        student[i].fullName[strcspn(student[i].fullName, "\n")] = '\0';
        printf("Birth date(DD/MM/YYYY): ");
        scanf("%s", student[i].birthdate);
        getchar();
        printf("Algebra grade: ");
        scanf("%f", &student[i].algebra);
        getchar();
        printf("Calculus grade: ");
        scanf("%f", &student[i].calculus);
        getchar();
        printf("Basic Programming grade: ");
        scanf("%f", &student[i].basicProgramming);
        getchar();
    /*fgets() reads characters from the input stream until a newline character (\n) is encountered or until n-1 characters have been read,
 whichever comes first. The newline character is included in the string that is stored in str.*/
    }

    // print on the terminal
    printf("\n+----------------------------------------------------------------------------------------+\n");
    printf("|%-12s|%-18s|%-12s|%-10s|%-10s|%-10s|%-10s|\n", "Student ID", "Full name", "Birth date", "Algebra", "Calculus", "BP", "GPA");
    for (int i = 0; i < numOfStudents; i++)
    {
        printf("+------------+------------------+------------+----------+----------+----------+----------+\n");
        printf("|%-12s", student[i].studentID);
        printf("|%-18s", student[i].fullName);
        printf("|%-12s", student[i].birthdate);
        printf("|%-10.2f", student[i].algebra);
        printf("|%-10.2f", student[i].calculus);
        printf("|%-10.2f", student[i].basicProgramming);
        student[i].gpa = (student[i].algebra + student[i].calculus + student[i].basicProgramming) / 3;
        printf("|%-10.2f|\n", student[i].gpa);
    }
    printf("+----------------------------------------------------------------------------------------+\n");

    // write to file.txt
    FILE *fptr; //*fptr is a function pointer, capable of referring a function whose return type is void and also it will not take any argument ()
    fptr = fopen("file.txt", "w");
    fprintf(fptr, "+----------------------------------------------------------------------------------------+\n"); //fprintf: f ở đầu chính là flie
    fprintf(fptr, "|%-12s|%-18s|%-12s|%-10s|%-10s|%-10s|%-10s|\n", "Student ID", "Full name", "Birth date", "Algebra", "Calculus", "BP", "GPA");
    for (int i = 0; i < numOfStudents; i++)
    {
        fprintf(fptr, "|------------+------------------+------------+----------+----------+----------+----------|\n");
        fprintf(fptr, "|%-12s", student[i].studentID);
        fprintf(fptr, "|%-18s", student[i].fullName);
        fprintf(fptr, "|%-12s", student[i].birthdate);
        fprintf(fptr, "|%-10.2f", student[i].algebra);
        fprintf(fptr, "|%-10.2f", student[i].calculus);
        fprintf(fptr, "|%-10.2f", student[i].basicProgramming);
        student[i].gpa = (student[i].algebra + student[i].calculus + student[i].basicProgramming) / 3;
        fprintf(fptr, "|%-10.2f|\n", student[i].gpa);
    }
    fprintf(fptr, "+----------------------------------------------------------------------------------------+\n");
    fclose(fptr);

    // call the function
    highestGpa(numOfStudents, student);
    lowestGpa(numOfStudents, student);
    highestBpGrade(numOfStudents, student);
    oldestStudent(numOfStudents, student);
    youngestStudent(numOfStudents, student);
}






