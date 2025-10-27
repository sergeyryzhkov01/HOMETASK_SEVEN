#include <stdio.h>
#define _CRT_SECURE_NO_DEPRECATE 
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    int num;

    printf("¬ведите число от 1 до 12: ");
    scanf("%d", &num);

    switch (num) {
    case 1: printf("I\n"); break;
    case 2: printf("II\n"); break;
    case 3: printf("III\n"); break;
    case 4: printf("IV\n"); break;
    case 5: printf("V\n"); break;
    case 6: printf("VI\n"); break;
    case 7: printf("VII\n"); break;
    case 8: printf("VIII\n"); break;
    case 9: printf("IX\n"); break;
    case 10: printf("X\n"); break;
    case 11: printf("XI\n"); break;
    case 12: printf("XII\n"); break;
    default: printf("ќшибка: число должно быть от 1 до 12\n");
    }

    return 0;
}