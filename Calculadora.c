#include <stdio.h>
#include <string.h>

int add(int x, int y){
    printf("Resultado: ");
    printf("%d + %d = %d", x, y, x+y);
    return 0;
}
int sub(int x, int y){
    printf("Resultado: ");
    printf("%d - %d = %d", x, y, x-y);
    return 0;
}
int multi(int x, int y){
    printf("Resultado: ");
    printf("%d * %d = %d", x, y, x*y);
    return 0;
}
int divisao(int x, int y){
    printf("Resultado: ");
    printf("%d / %d = %d", x, y, x/y);
    return 0;
}

int main(){
    int o;
    int a, b;
    char r;
    printf("===============================\n");
    printf("      Calculadora Simples      \n");
    printf("===============================\n");
    printf("Selecione uma operacao: \n");
    printf("1. Adicao\n");
    printf("2. Subtracao\n");
    printf("3. Multiplicacao\n");
    printf("4. Divisao\n");
    printf("5. Sair\n");
    while (1) {
        do {
            printf("Opcao: ");
            scanf("%d", &o);

            if (o!=1 && o!=2 && o!=3 && o!=4 && o!=5){
                printf("Erro! Digite um numero valido\n");
            }
        } while (o!=1 && o!=2 && o!=3 && o!=4 && o!=5);
        

        if (o!=5){
            printf("Digite o primeiro numero: ");
            scanf("%d", &a);
            printf("Digite o segundo numero: ");
            scanf("%d", &b);

            switch (o){
                case 1:
                    add(a, b);
                    break;
                case 2:
                    sub(a, b);;
                    break;
                case 3:
                    multi(a, b);;
                    break;
                case 4:
                    while(b==0){
                        printf("Erro: Divisao por zero nao e permitida.\n");
                        printf("Digite o segundo numero: ");
                        scanf("%d", &b);
                    }
                    divisao(a, b);
                    break;
            }

            do {
                printf("\nDeseja realizar outra operacao? (s/n): ");
                scanf(" %c", &r);
                if (r!='s' && r!='n' && r!='S' && r!='N'){
                    printf("Resposta invalida. Por favor, digite 's' para sim ou 'n' para nao.");
                }
            } while (r!='s' && r!='n' && r!='S' && r!='N');
            
        }
        if (o==5 || r=='n' || r=='N') break;
    }

    printf("Ate mais! :)");
    
    return 0;
}