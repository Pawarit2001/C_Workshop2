//ประเภทที่ 2 Function ที่มี parameter และไม่มี return value (Have parameter and no return value)
//Parameter เป็นตัวแปรประเภทหนึ่ง จะเก็บหรือข้อมูลที่การส่งมาจากการเรียกใช้Function

#include <stdio.h>

void showline();

void funcSAU(int a, int b, double c){
    double sum = a + b + c;
    printf("Sum of a b c is : %.2lf\n", sum);
}

void IQ(char name[50], int age){
    printf("Your name is : %s\n", name);
    printf("Your age is : %d\n", age);

}

void main(){

    showline();
    funcSAU(10, 20, 10.25); //เวลา call function ที่มี parametors ต้องส่ง argument ให้ parameter ด้วย
    showline();
    IQ("Sombut", 27);
    IQ("Somkid", 27);
    showline();
}

void showline(){

    printf("------------\n");
}