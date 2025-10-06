#include <stdio.h>
#include <stdbool.h>
int main(){
    int Anna_spot;
    int Boris_spot;

    printf("Введите номера мест Анны и Бориса: ");
    scanf("%d %d", &Anna_spot, &Boris_spot);
    bool is_Anna_spot_even = Anna_spot % 2 == 0;
    bool is_Boris_spot_even = Boris_spot % 2 == 0;

    bool can_drink_coffee = is_Anna_spot_even^is_Boris_spot_even;

    printf("Могут ли они выпить кофе вместе? %s\n", can_drink_coffee ? "Да" : "Нет");
    return 0;
}