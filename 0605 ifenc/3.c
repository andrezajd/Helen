#include<stdio.h>
int main (){

    int idade;
    scanf("%d", &idade);
    if(idade >=0){
        if(idade <=2){
            printf("bebe");
        } else {
            if(idade<=12){
                printf("crianca");
            } else {
                if(idade<=17){
                        printf("adolescente");
                }else {
                    if (idade <=59){
                            printf("adulto");
                    } else {
                        if(idade >59){
                                printf("idoso");
                        }
                    }
                }
           }

        }

    }

    else{
            printf("idade digitada invalida");
    }
   return 0;
}
