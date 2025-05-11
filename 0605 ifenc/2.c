/*. Crie um programa que receba um número inteiro e verifique se ele é múltiplo de 3,
múltiplo de 5, ou múltiplo de ambos.*/

/*#include<stdio.h>

int main (){
    int a;

    if (a múltiplo de de de 3)
        printf()


return 0;
}*/

#include<stdio.h>
int main (){
int num;
scanf("%d", &num);
if(num%3==0){
    if(num%5==0){
       printf("multiplo de 3 e 5");
    }
    else {
        printf("multiplo soh de 3");
    }
}
else if(num%5==0) {
    printf("multiplo soh de 5");
}
else {
        printf("nao eh multiplo de 3 e 5");
}

return 0;
}



