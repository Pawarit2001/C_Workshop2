//ประเภทของ Funtcion มี 4 ประเภท
//ประเภทที่ 1 Function ที่มี parameter และไม่มี return value (no parameter and no return value)

#include <stdio.h>

void showHello(){ //ไม่มี parameter คือ ไม่มีอะไรในวงเล็บหลังชื่อ Fuction

    printf("Hello\n");
    //ต้องไม่มีคำสั่ง return ในตัว Funvtion และ return type ต้องเป็น void
}

void showHi(){
    printf("Hi\n");
    showHello();
}

void main(){
    showHello();
    showHello();
    showHi();


}

void showHey(){

    printf("Hey\n");

}