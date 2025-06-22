//ประเภทที่ 4 Function ที่มี parameter และมี return value (Have parameter and has return value)

#include <stdio.h>

double multiplynumber(double n1, double n2);
double dividenumber(double n1, double n2);

double addnumber(double n1, double n2){
    double value = n1 + n2;
    return value;
}

double subnumber(double n1, double n2){
    double value = n1 - n2;
    return value;
}

void main(){
    printf("10 + 555 = %.2lf\n", addnumber(10, 555));
    printf("20 - 5 = %.2lf\n", subnumber(20, 5));
    printf("25 * 5 = %.2lf\n", multiplynumber(25, 5));


}

double multiplynumber(double n1, double n2){
    double value = n1 * n2;
    return value;
}

double dividenumber(double n1, double n2){
    double value = n1 / n2;
    return value;
}