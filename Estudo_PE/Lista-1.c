#include <stdio.h>
#include <string.h>

/*Faça um programa que leia 3 valores reais e que informe se eles formam um triângulo. Caso seja
possível formar o triângulo indique se este é equilátero, isósceles ou escaleno.*/

int é_tri(float l1, float l2,float l3){

    if ((l1 + l2 > l3)&&(l1 + l3 > l2)&&(l3 + l2 > l1))
        return 1;
    return 0;
}

void qual_tri(float l1, float l2, float l3){

    if ((l1 == l2)&&(l2 == l3))
        printf("É um triângulo equilátero!\n");
    else if ((l1 != l2)&&(l1 != l3)&&(l2 != l3))
        printf("É um triângulo escaleno\n!");
    else
        printf("É um triângulo isóceles\n");

    //não retorna pq o type é void
    
}
int Q1(void){
    
    float l1, l2, l3;

    printf("Entre com os 3 lados separados por espaço: "); 
    scanf("%f %f %f", &l1, &l2, &l3);
    
    if ((é_tri(l1, l2, l3)) == 1)
        qual_tri(l1, l2, l3);
    else
        printf("Não é triângulo :(\n");

    return 0;
}

/*Faça um programa que leia dois números inteiros e que calcule e mostre a soma e a multiplicação
dos dois números e a divisão e a subtração do primeiro pelo segundo. Caso o segundo número
digitado seja zero, o programa deve informar ao usuário que a operação de divisão é impossível.*/

int Q2(void){

    float a, b;

    printf("Entre com A e B: ");
    scanf("%f %f", &a, &b);

    printf("Essa é a soma: %.0f\n", a + b);
    printf("Esse é o produto: %.0f\n", a * b);
    printf("Essa é a sub do primeiro pelo segundo: %.0f\n", a - b);

    if (b != 0){
        printf("Essa é a divisão do primeiro pelo segundo: %.3f\n", a / b);
    }else
        printf("Não é possível dividir por zero\n");

    return 0;
}
/*Faça um programa que leia a idade de um nadador e que calcule e mostre a sua categoria seguindo
as regras:
• Categoria Baby: até 4 anos
• Categoria Infantil: 5 – 10 anos
• Categoria Juvenil: 11 – 17 anos
• Categoria Máster: A partir de 18 anos*/

int Q3(void){
    int idade;

    printf("Entre com sua idade: ");
    scanf("%d", &idade);

    if (idade <= 4)
        printf("BABY\n");
        else if (idade <= 10)
            printf("INFANTIL\n");
            else if (idade <= 17)
                printf("JUVENIL\n");
                else if (idade >= 18)
                    printf("MÁSTER\n");

    return 0;
}
/*Essa é a main seletora de questões*/

void barra(){
    printf("\n=============================\n\n");
}
void barra_main(){
    barra();
    main();
}

int main(void){
    
    int seletor;

    printf("Qual questão? ");
    scanf("%d", &seletor);

    switch (seletor){

    case 1: barra(); Q1(); barra_main();
        break;
    case 2: barra(); Q2(); barra_main();
        break;
    case 3: barra(); Q3(); barra_main();
        break;
    
    default:
        barra();
        printf("inválido\n");
        main();
        break;
    }
    return 0;
}

