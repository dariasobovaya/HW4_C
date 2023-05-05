#include <stdio.h>

int main() {
    int a, z = 0, uz = 0, ltz = 0; //объявляем переменные
    scanf("%d", &a);
    int arr[a]; //объявляем массив
    for (int i = 0; i < a; i++) {//создаем цикл 
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < a; i++) {
        if (arr[i] > 0) {//условие если больше нуля
            uz++;
        }
        if (arr[i] == 0) { //условие если равно 0
            z++;
        }
        if (arr[i] < 0) {// условие если меньше 0
            ltz++;
        }
    } 
    printf("%d %d %d", z, uz, ltz);//вывод результатов   
}