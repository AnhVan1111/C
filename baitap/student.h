// Declare Struct
struct Students
{
    char *studentID;
    char *fullName;
    char *birthdate;
    int dd, mm, yyyy;
    float algebra;
    float calculus;
    float basicProgramming;
    float gpa;
};

int dateCompare(int d1, int m1, int y1, int d2, int m2, int y2)
{
    return (y1 < y2) ? -1 : (y1 > y2) ? 1 : 
           (m1 < m2) ? -1 : (m1 > m2) ? 1 :
           (d1 < d2) ? -1 : (d1 > d2) ? 1 : 0;
}


void splitDate(int numOfStudents, struct Students student[numOfStudents])
{
    for (int i = 0; i < numOfStudents; i++)
    {
        sscanf(student[i].birthdate, "%d/%d/%d", &student[i].dd, &student[i].mm, &student[i].yyyy); // sscanf: formatted input from a string
    }
}

void oldestStudent(int numOfStudents, struct Students student[numOfStudents])
{
    splitDate(numOfStudents, student);
    struct Students oldestStudent = student[0];

    for (int i = 0; i < numOfStudents; i++)
    {
        if (dateCompare(student[i].dd, student[i].mm, student[i].yyyy, oldestStudent.dd, oldestStudent.mm, oldestStudent.yyyy) < 0)
        {
            oldestStudent = student[i];
        }
    }

    printf("-The oldest student:\n");
    printf("+--------------------------------------------+\n");
    printf("|%-12s|%-18s|%-12s|\n", "Student ID", "Full name", "Birth date");
    printf("+------------+------------------+------------+\n");
    printf("|%-12s", oldestStudent.studentID);
    printf("|%-18s", oldestStudent.fullName);
    printf("|%-12s|\n", oldestStudent.birthdate);
    printf("+--------------------------------------------+\n");
}

void youngestStudent(int numOfStudents, struct Students student[numOfStudents])
{
    struct Students youngestStudent = student[0];

    for (int i = 0; i < numOfStudents; i++)
    {
        if (dateCompare(student[i].dd, student[i].mm, student[i].yyyy, youngestStudent.dd, youngestStudent.mm, youngestStudent.yyyy) > 0)
        {
            youngestStudent = student[i];
        }
    }

    printf("-The youngest student:\n");
    printf("+--------------------------------------------+\n");
    printf("|%-12s|%-18s|%-12s|\n", "Student ID", "Full name", "Birth date");
    printf("+------------+------------------+------------+\n");
    printf("|%-12s", youngestStudent.studentID);
    printf("|%-18s", youngestStudent.fullName);
    printf("|%-12s|\n", youngestStudent.birthdate);
    printf("+--------------------------------------------+\n");
}

