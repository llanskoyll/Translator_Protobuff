#include <stdio.h>

#include "../include/convert_protobuff_to_structur.h"
#include "../include/convert_structur_to_protobuff.h"
#include "../include/incilDate.h"

int main() 
{
    int change;

    do {

        printf("Конверт из \"protobuff\" в \"структуру\"  - 1 \r\n");
        printf("Конверт из \"структуры\" в \"protobuff\"  - 2 \r\n");
        printf("Заполнить структуру protobuff данными  - 3 \r\n");
        printf("Выход - 0 \r\n");
        printf("Введите нужную опцию - ");
        scanf("%d", &change);

        switch (change) {

        case 1:
            convert_protobuff_to_structur();
            break;

        case 2:
            convert_structur_to_protobuff();
            break;

        case 3:
            incilDate();
            break;
        
        case 0:
            break;

        default: 
            printf("Неверный ввод");
            break;
        }

        printf("\t\n");

    } while(change != 0);
}