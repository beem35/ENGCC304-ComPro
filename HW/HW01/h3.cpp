/*
    เขียนโปรแกรมรับ "ชื่อ" จากผู้ใช้ และแสดงผลบนหน้าจอดังผลลัพธ์ด้านล่างต่อไปนี้ 
    
    Test case:
        First Name: Aomsin
        Last Name: AomMoney
    Output:
        Aomsin AomMoneys TC, RMUTL, Chiang Mai, Thailand

    Test case:
        First Name: ABC
        Last Name: DEF
    Output:
        ABD DEFs TC, RMUTL, Chiang Mai, Thailand
*/
#include <stdio.h>
int main() {
    char firstName[50], lastName[50];
    
    // รับชื่อและนามสกุลจากผู้ใช้
    printf("First Name: ");
    scanf("%s", firstName);
    printf("Last Name: ");
    scanf("%s", lastName);
    
    // แสดงผลลัพธ์
    printf("%s %s TC, RMUTL, Chiang Mai, Thailand\n", firstName, lastName);
    
    return 0;
}