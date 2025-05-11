/*Crie um programa que simule um login simples. Peça um nome de usuário e uma
senha. Se o nome de usuário for "admin", peça a senha. Se a senha for "1234", exiba
"Login bem-sucedido".*/

#include <stdio.h>

int main() {
    int usuario;  // 1 representa "admin"
    int senha;

    printf("Digite o código do usuário (1 para admin): ");
    scanf("%d", &usuario);

    if (usuario == 1) {
        printf("Digite a senha: ");
        scanf("%d", &senha);

        if (senha == 1234) {
            printf("Login bem-sucedido.\n");
        } else {
            printf("Senha incorreta.\n");
        }
    } else {
        printf("Usuário não reconhecido.\n");
    }

    return 0;
}

