#include <stdio.h>
#include <math.h>

int main(){
    int p=0;
    float num1, sum=0, arithmetic_mean, mas[1000];//создание массива 
    scanf("%f", &num1);
    while (num1 != 0){//создание цикла
        mas[p] = num1;
        scanf("%f", &num1);
        p++;//увеличиваем на один
    }
    for (int n=0; n<p; n++){
        sum+=mas[n];
    }
    arithmetic_mean = sum/p;
    printf("%f\n", arithmetic_mean);//выводим результат
    return 0;
}