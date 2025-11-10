#include <stdio.h>

int main() {
    char emp_id[11];
    int work_hours;
    float amount_per_hour, salary;

    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%s", emp_id);
    printf("Input the working hrs: ");
    scanf("%d", &work_hours);
    printf("Salary amount/hr: ");
    scanf("%f", &amount_per_hour);

    salary = work_hours * amount_per_hour;

    printf("Employees ID = %s\n", emp_id);
    printf("Salary = U$ %.2f\n", salary);
    return 0;
}
