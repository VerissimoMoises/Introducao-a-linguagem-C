#include <stdio.h>

int main()
{
    int idade;
    idade = 18;
    printf("A idade do fulano é: %d", idade);
    printf("\nInforme a nova idade: ");
    scanf("%d", &idade);
    printf("A idade nova do fulano é: %d", idade);

    return 0;
}