#include <stdio.h>

int main() {
    int salary_h = 0.00 ;
    char empid[10] = { 0 } ;
    int hours = 0 ;

    printf( "Enter Employee ID (max. 10 chars): " ) ;
    scanf( "%s", empid ) ;

    printf( "Enter Hours Worked: " ) ;
    scanf( "%d", &hours ) ;

    printf( "Enter Salary/Hr: " ) ;
    scanf( "%d", &salary_h ) ;

    float salary = salary_h * hours ;
    printf( "\nEmployee ID: %s\n", empid ) ;
    printf( "Salary: U$ %.2f\n", salary ) ;

    return 0;
}