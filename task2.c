#include <stdio.h>

int main(){
    int f, h, result;
    scanf("%d %d", &f, &h);
    //пробелы для первой строчки
    for (int i=1; i<f; i++){
        printf("   ");
    }
    //основной параметр с числами
    for (int i=1; i<=h; i++){
        //максимум в строке 7 чисел 
        if (f == 8){
            printf("\f");
            f = 1;
        }
        //разделение чтобы все числа находились друг под другом
        if (i/10!= 0){
            printf("%d ", i);
        } else{
            printf(" %d ", i);
        }

        f += 1;
    }

    printf("\f");//выводим результаты
    return 0;
}