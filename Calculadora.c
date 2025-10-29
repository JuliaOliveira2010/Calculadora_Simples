#include <stdio.h>
#include <string.h>

int add(float x, float y){
    printf("Resultado: ");
    printf("%.2f + %.2f = %.2f", x, y, x+y);
    return 0;
}
int sub(float x, float y){
    printf("Resultado: ");
    printf("%.2f - %.2f = %.2f", x, y, x-y);
    return 0;
}
int multi(float x, float y){
    printf("Resultado: ");
    printf("%.2f * %.2f = %.2f", x, y, x*y);
    return 0;
}
int div(float x, float y){
    printf("Resultado: ");
    printf("%.2f / %.2f = %.2f", x, y, x/y);
    return 0;
}

int main(){
    int o;
    float a, b;
    char r='s';
    printf("===============================\n");
    printf("      Calculadora Simples      \n");
    printf("===============================\n");
    printf("Selecione uma operacao: \n");
    printf("1. Adicao\n");
    printf("2. Subtracao\n");
    printf("3. Multiplicacao\n");
    printf("4. Divisao\n");
    printf("5. Sair\n");
    do {
        do {
            printf("Opcao: ");
            scanf("%d", &o);

            if (o<1 || o>5){
                printf("Erro! Digite um numero valido\n");
            }
        } while (o<1 || o>5);
        

        if (o!=5){
            printf("Digite o primeiro numero: ");
            scanf("%f", &a);
            printf("Digite o segundo numero: ");
            scanf("%f", &b);

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
                        scanf("%f", &b);
                    }
                    div(a, b);
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
    } while(o!=5 && (r=='s' || r=='S'));
    printf("===============================\n");
    printf("Obrigado por usar nossa calculadora, ate mais!");
    
    return 0;
}