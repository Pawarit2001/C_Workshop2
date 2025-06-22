// Function (User-define function) ฟังก์ชันที่ Dev. สร้างขึ้นมาเอง
// Function คือ การทำงานหนึ่งๆ จะไม่ทำงานหากไม่เรียกใช้ (call
#include <stdio.h>

void funcB(); //Declare funtion
void funcC(); //Declare funtion


void funcA(){
    printf("AAAAA\n");
}

void main(){
    funcA();
    funcB();
    funcC();
    funcA();
    funcA();

}

void funcB(){

    printf("BBBBBB\n");
}

void funcC(){
    printf("CCCCCC\n");
}