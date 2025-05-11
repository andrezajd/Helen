#include <stdio.h>
int main()
{
    int idade;
    printf("digite a idade: ");
    scanf("%d", &idade);

    if (idade == 0)
    {
        printf("idade ivalida");
    }
    else if (idade <= 12)
    {
        printf("crianca");
    }
    else if (idade <= 17)
    {
        printf("aborrecente");
    }
    else if (idade <= 59)
    {
        printf("adulto");
    }
    else if (idade >= 60)
    {
        printf("idoso");
    }
    {
    }
    {
    }
    {
    }
    {
    }

    return 0;
}
