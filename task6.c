#include <stdio.h>

int main() {
    int t, c = 0; //объявляем переменные
    scanf("%d", &t); //считываем t
    int arr[t]; //создаём массив с t символами
    for (int i = 0; i < t; i++) { //объявляем цикл для создания массива
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < t; i++) { //объявляем цикл для проверки каждого элемента
        if (arr[i] > 0) {
            c++;
        }
    }
    printf("%d", c);
}