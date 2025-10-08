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
/*Faça um programa que apresente o peso total que será carregado por um caminhão. Sabe-se que
este caminhão carrega 25 caixas. O peso de cada uma das caixas será informado pelo usuário.*/

int Q4(void){
    int n, soma=0;
    for (int i=0; i<25; i++){
        printf("Entre com o peso da caixa %d: ", i+1);
        scanf("%d", &n);
        soma += n;
    }
    printf("Esse é o peso total: %d", soma);
    return 0;
}
/*Faça um programa que leia a quantidade e o preço de 50 produtos que foram comprados por uma
empresa. Ao final deve ser escrito o total gasto pela empresa.*/

int Q5(void){
    int q;
    float p, soma=0;
    for (int i=0; i<5; i++){
        printf("Entre com o valor do %d produto: ", i+1);
        scanf("%f", &p);
        printf("Entre com a quantidade desse produto: ");
        scanf("%d", &q);
        soma += p*q;
    }
    printf("Esse é o total gasto pela empresa: R$%.2f", soma);
}
/*Faça um programa que leia 2 números inteiros positivos, A e B, e que calcule a soma de todos os
números compreendidos entre eles. Os valores A e B não devem ser considerados no somatório.
Caso A seja maior do que B deve ser enviada uma mensagem para o usuário informando que a
soma não será realizada.*/

int Q6(void){
    int a, b, respota=0;
    printf("Entre com A: ");
    scanf("%d", &a);
    printf("Entre com B: ");
    scanf("%d", &b);
    if (a > b){
        printf("\nNão possível");
        return 0;
    }
    if (a==b){
        printf("Valores iguais");
        return 0;
    }
    if (b==a+1){
        printf("Essa é a soma: 0");
        return 0;
    }
    for (int i=1; i<b-a; i++){
        respota += a + i;
    }
    printf("Essa é a soma: %d", respota);
    return 0;
}
/*Faça um programa que calcule o valor de E segundo a expressão abaixo:
E = 21 + 22 + 23 + ... + 2N-1 + 2N*/

int Q7(void){
    int n, soma=0, potenciador=1;
    scanf("%d", &n);
    for (int i=1; i<=n; i++){
        soma += 2*potenciador;
        potenciador *= 2;
    }
    printf("Essa é a soma: %d", soma);
}
/*Faça um programa que leia os nomes e as notas dos 60 alunos de uma turma e
imprima, após a entrada de todos os dados, os nomes dos alunos aprovados.
Considere que a média para aprovação é 6,0.*/

int Q8(void){
    int notas[6][3];
    char nome[10], nomes[6][10];
    float media;
    for (int i=0; i<6; i++){
        printf("Entre com o nome do aluno %d: ", i+1);
        scanf(" %s", nome);
        strcpy(nomes[i], nome);
    }
    for (int g=0; g<6; g++){
        for (int c=0; c<3; c++){
            printf("Entre com a nota %d do %s: ", (c+1), nomes[g]);
            scanf("%d", &notas[g][c]);
        }
    }
    for (int o=0; o<6; o++){
        int soma=0;
        for (int p=0; p<3; p++){
            soma += notas[o][p];
        }
        media = 0;
        media = soma/3.0;
        if (media >= 6){
            printf("%s\n", nomes[o]);
        }
    }
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
    case 4: barra(); Q4(); barra_main();
        break;
    case 5: barra(); Q5(); barra_main();
        break;
    case 6: barra(); Q6(); barra_main();
        break;
    case 7: barra(); Q7(); barra_main();
        break;
    case 8: barra(); Q8(); barra_main();
        break;
    default:
        barra();
        printf("inválido\n");
        main();
        break;
    }
    return 0;
}
