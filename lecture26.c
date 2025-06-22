//การแก้ปัญหาโจทย์โปรแกรมด้วยฟังชั่น
//1. Dev แต่ละคน สามารถเลือกใช้ประเภทของฟังชั่นในการแก้ปัญหาโจทย์หนึ่งๆ ได้ต่างกัน
//2. จำนวนฟังชั่นที่ถูกสร้างขึ้นจาก Dev แต่ละคนสำหรับแก้ไขปัญหาโจทย์หนึ่งๆ อาจจะมีจำนวนไม่เท่ากัน

//Ex. หาผลรวม ค่าสูงสุด ต่ำสุด และค่าเฉลี่ยน ของตัวเลข 5 จำนวนที่รับจากผู้ใช้ แล้วแสดงผลออกมาทางหน้าจอ
//คำนวณผลรวม หาค่าสูงสุด หาค่าสูงสุด หาค่าเฉลี่ย ป้อนตัวเลข 5 ตัว แสดงผล

#include <stdio.h>

double n1, n2, n3, n4, n5; //Declare global variable

void inputNumber(){
    printf("Input Number 1: "); scanf("%lf", &n1);
    printf("Input Number 2: "); scanf("%lf", &n2);
    printf("Input Number 3: "); scanf("%lf", &n3);
    printf("Input Number 4: "); scanf("%lf", &n4);
    printf("Input Number 5: "); scanf("%lf", &n5);
}

double sumNumber(){

    return n1 + n2 + n3 + n4 + n5;
}

double avgNumber(){

    return (n1 + n2 + n3 + n4 + n5) / 5;
}
double maxNumber(){
    double max = n1;
    if(n2 > max){
        max = n2;
    }
    if(n3 > max){
        max = n3;
    }
    if(n4 > max){
        max = n4;
    }
    if(n5 > max){
        max = n5;
    }
    return max;
        
}

double minNumber(){
        double min = n1;
    if(n2 > min){
        min = n2;
    }
    if(n3 > min){
        min = n3;
    }
    if(n4 > min){
        min = n4;
    }
    if(n5 > min){
        min = n5;
    }
    return min;

}
void showResult(){
    printf("Number is %.2lf %.2lf %.2lf %.2lf %.2lf\n", n1 + n2 + n3 + n4 + n5);
    printf("Sum is : %.2lf\n", sumNumber);
    printf("Max is : %.2lf\n", maxNumber);
    printf("Min is : %.2lf\n", minNumber);
    printf("Avg is : %.2lf\n", avgNumber);
}

void main(){
    inputNumber();
    showResult();

}