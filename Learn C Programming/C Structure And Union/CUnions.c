#include <stdio.h>
// Ex: Difference between unions and structures
/*union unionjob {
    char name[32];
    float salary;
    int worker;
} ujob;
struct structJob {
    char name[32];
    float salary;
    int worker;
}sJob;
int main() {
    printf("size of union = %d bytes\n", sizeof(ujob));
    printf("size of structure = %d byte", sizeof(sJob));

    return 0;
}*/

// Ex: Accessing Union Members
union job {
    float salary;
    int workerNo;
} j;
int main() {
    j.salary = 12.3;
    // when j.workerNo is assigned a value,
    // j.salary will no longer hold 12.3
    j.workerNo = 5;

    printf("Salary = %.1f\n", j.salary);
    printf("WorkerNo = %d", j.workerNo);

    return 0;
}

