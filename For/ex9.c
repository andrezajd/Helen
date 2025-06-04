/*Peça um número ao usuário e calcule seu fatorial.*/
#include <stdio.h>
//símbolo (=) em C, significa ( Recebe)
int main() {
    int fatorial = 5; //5 x 4 x 3 x 2 x 1 eu não me lembrava disso!
    int resposta = 1;

    for(; fatorial >= 1; --fatorial){
        resposta *= fatorial;//resposta = resposta * fatorial
    }
    printf("O numero fatorial eh %i\n",resposta);

    return 0;
}
///////////////////////////////////////////////////////////////////////
    //Prof eu tô tentando! mas ainda preciso de muitas explicações do por disso e daquilo!


    /*Davi Fez assim: obs: Achei mais fácil!
    // Peça um número ao usuário e calcule seu fatorial.

#include<stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int fatorial = 1;
    for (int i = 1; i <= num; i++)
        fatorial = fatorial*i;
        // i = 1; fatorial = 1;
        // i = 2; fatorial = 2;
        // i = 3; fatorial = 6;
        // i = 4; fatorial = 24;
        // i = 5; fatorial = 120;

    printf("O fatorial de %d eh %d", num, fatorial);
}

////////////////////////////////////////////////////////////


 /*#include <stdio.h>

int main() {
    int num, i;
    int resposta = 1;

    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Fatorial não é definido para números negativos.\n");
        return 1;
    }

    for (i = num; i >= 1; --i) {
        resposta *= i;
    }

    printf("O fatorial de %d é %d\n", num, resposta);

    return 0;
}
*/
//////////////////////////////////////////////////////////////////////////
/*resposta = 1 ??
explicando...


resposta = resposta * fatorial

primeiro laço de repetição
resposta = 1 * 5  = 5 (resposta assume valor 5)

segundo laço de repetição
resposta = 5 * 4 = 20



terceiro laço de repetição
resposta = 20 * 3 = 60

quarto laço de repetição
resposta = 60 * 2 = 120


quinto e ultimo laço de repetição  de DECREMENTO (fatorial--) (fatorial = fatorial - 1)
resposta = 120 * 1 = 120*/

/////////////////////////////////////////////////////////////////////////

/*fatorial = 5
resposta = fatorial

laço for:
(fatorial = resposta - 1; fatorial >= 1; --fatorial)
resposta *= fatorial;

Assim, eu já defino que fatorial = 4, para multiplicar nos laços de repetição até chegar em 1.*/
