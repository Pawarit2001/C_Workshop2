//ประเภทที่ 3 Function ที่มี parameter และมี return value (no parameter and has return value)

#include <stdio.h>

double funcB();

int funcA(){
    return 10;
}


void main(){
    int xx;

    xx = funcA();

    printf("Value of funcB return : %.2lf\n", funcB());


}

double funcB(){
    printf("WOWWOWWOW\n");
    return 20.5 + 10.5;
}