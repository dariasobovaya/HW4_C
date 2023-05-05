#include <stdio.h>

int main(){
    int num, i=0;// объявляем переменные
    int mas[1000];//создание массива
    scanf("%d", &num);//получаем результаты 
    if (num < 0){
        printf("-");
    }
    while (num != 0){// создаем цикл
        mas[i]=abs(num)%2;
        num=abs(num)/2;
        i++;// увеличиваем на 1
    }
    for (int n=0; n< i; n++){
        printf("%d", mas[i-n-1]);//выводим результат
    }
    printf("\n");//выводи результат
    return 0;

}