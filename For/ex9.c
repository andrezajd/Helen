/*Pe�a um n�mero ao usu�rio e calcule seu fatorial.*/
#include <stdio.h>
//s�mbolo (=) em C, significa ( Recebe)
int main() {
    int fatorial = 5; //5 x 4 x 3 x 2 x 1 eu n�o me lembrava disso!
    int resposta = 1;

    for(; fatorial >= 1; --fatorial){
        resposta *= fatorial;//resposta = resposta * fatorial
    }
    printf("O numero fatorial eh %i\n",resposta);

    return 0;
}
///////////////////////////////////////////////////////////////////////
    //Prof eu t� tentando! mas ainda preciso de muitas explica��es do por disso e daquilo!


    /*Davi Fez assim: obs: Achei mais f�cil!
    // Pe�a um n�mero ao usu�rio e calcule seu fatorial.

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

    printf("Digite um n�mero para calcular o fatorial: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Fatorial n�o � definido para n�meros negativos.\n");
        return 1;
    }

    for (i = num; i >= 1; --i) {
        resposta *= i;
    }

    printf("O fatorial de %d � %d\n", num, resposta);

    return 0;
}
*/
//////////////////////////////////////////////////////////////////////////
/*resposta = 1 ??
explicando...


resposta = resposta * fatorial

primeiro la�o de repeti��o
resposta = 1 * 5  = 5 (resposta assume valor 5)

segundo la�o de repeti��o
resposta = 5 * 4 = 20



terceiro la�o de repeti��o
resposta = 20 * 3 = 60

quarto la�o de repeti��o
resposta = 60 * 2 = 120


quinto e ultimo la�o de repeti��o  de DECREMENTO (fatorial--) (fatorial = fatorial - 1)
resposta = 120 * 1 = 120*/

/////////////////////////////////////////////////////////////////////////

/*fatorial = 5
resposta = fatorial

la�o for:
(fatorial = resposta - 1; fatorial >= 1; --fatorial)
resposta *= fatorial;

Assim, eu j� defino que fatorial = 4, para multiplicar nos la�os de repeti��o at� chegar em 1.*/
