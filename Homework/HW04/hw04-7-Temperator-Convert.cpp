/*
    จงเขียนโปรแกรมเพื่อแปลงอุณหภูมิ โดยรับมาจากผู้ใช้เป็นองศาเซลเซียส และแปลงเป็นฟาเรนไฮต์
    
    Test case:
        User input :
            22
    Output:
        22 degree Celsius = 71.6 degree Fahrenheit

    Test case:
        User input :
            36
    Output:
        36 degree Celsius = 96.8 degree Fahrenheit
*/
#include <stdio.h>
int main() {
    int Celsius;
    float Fahrenheit;
    printf("Test case:\n");
    printf("User input :\n");
    scanf("%d",&Celsius);
    Fahrenheit = 1.8 * Celsius + 32;
    printf("Output:\n");
    printf("%d degree Celsius = %.1f degree Fahrenheit",Celsius,Fahrenheit);
}