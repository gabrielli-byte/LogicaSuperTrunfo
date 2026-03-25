#include <stdio.h>
#include <string.h>

int main() {

int opcao;
int opcao1;
int opcao2;

char Escolha1[49];
char Escolha2[49];

float Resultado1, Resultado2;

// CARTA 1
char estado1;
char codigo1[5];
char nomeCidade1[50];
unsigned long int populacao1;
float area1;
float pib1;
int pontosTuristicos1;
float densidade1;
float pibPerCapita1;
float superPoder1;

float Carta1v1, Carta1v2;

// CARTA 2
char estado2;
char codigo2[5];
char nomeCidade2[50];
unsigned long int populacao2;
float area2;
float pib2;
int pontosTuristicos2;
float densidade2;
float pibPerCapita2;
float superPoder2;

float Carta2v1, Carta2v2;

// MENU
printf("Menu principal\n");
printf("1. Começar o jogo.\n");
printf("2. Ver as regras.\n");
printf("3. Sair do jogo.\n");
printf("Escolha uma opção.\n");
scanf("%d", &opcao);

switch (opcao)
{
case 1:

  // DADOS DA CARTA 1 
printf(" CARTA 1 \n");

printf("Estado (A a H): ");
scanf(" %c", &estado1);

printf("Codigo da carta (ex: A01): ");
scanf("%s", codigo1);

printf("Nome da cidade: ");
scanf(" %[^\n]", nomeCidade1);

printf("Populacao: ");
scanf("%lu", &populacao1);

printf("Area (km²): ");
scanf("%f", &area1);

printf("PIB (em bilhoes): ");
scanf("%f", &pib1);

printf("Numero de pontos turisticos: ");
scanf("%d", &pontosTuristicos1);


// DADOS DA CARTA 2 
printf("\n CARTA 2 \n");

printf("Estado (A a H): ");
scanf(" %c", &estado2);

printf("Codigo da carta (ex: A01): ");
scanf("%s", codigo2);

printf("Nome da cidade: ");
scanf(" %[^\n]", nomeCidade2);

printf("Populacao: ");
scanf("%lu", &populacao2);

printf("Area (km²): ");
scanf("%f", &area2);

printf("PIB (em bilhoes): ");
scanf("%f", &pib2);

printf("Numero de pontos turisticos: ");
scanf("%d", &pontosTuristicos2);


// CALCULOS 
densidade1 = populacao1 / area1;
pibPerCapita1 = (pib1 * 100000000) / populacao1;

densidade2 = populacao2 / area2;
pibPerCapita2 = (pib2 * 100000000) / populacao2;


// SUPER PODER

superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);

superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

    // MENU SWICTH

    printf("\n Comparaçao:\n");
    printf("Escolha o primeiro atributo para comparação\n");
    printf("1. População\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade\n");
    printf("Opção: ");
    scanf("%d", &opcao1);


    printf("Escolha o segundo atributo para comparação\n");
    printf("1. População\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade\n");
    printf("Opção: ");
    scanf("%d", &opcao2);


    if (opcao1 == opcao2)
    {
        printf("Não é permitido escolher o mesmo atributo\n");
    }

    switch (opcao1)
    {
        case 1:
            Carta1v1 = populacao1;
            Carta2v1 = populacao2;
            strcpy(Escolha1, "População");
            break;
        case 2:
            Carta1v1 = area1;
            Carta2v1 = area2;
            strcpy(Escolha1, "Área");
            break;
        case 3:
            Carta1v1 = pib1;
            Carta2v1 = pib2;
            strcpy(Escolha1, "PIB");
            break;
        case 4:
            Carta1v1 = pontosTuristicos1;
            Carta2v1 = pontosTuristicos2;
            strcpy(Escolha1, "Pontos Turisticos");
            break;
        case 5:
            Carta1v1 = densidade1;
            Carta2v1 = densidade2;
            strcpy(Escolha1, "Densidade");
            break;
        default:
            printf("Opção inválida!\n");
            return 0;
    }

    
    switch (opcao2)
    {
        case 1:
            Carta1v2 = populacao1;
            Carta2v2 = populacao2;
            strcpy(Escolha2, "População");
            break;
        case 2:
            Carta1v2 = area1;
            Carta2v2 = area2;
            strcpy(Escolha2, "Área");
            break;
        case 3:
            Carta1v2 = pib1;
            Carta2v2 = pib2;
            strcpy(Escolha2, "PIB");
            break;
        case 4:
            Carta1v2 = pontosTuristicos1;
            Carta2v2 = pontosTuristicos2;
            strcpy(Escolha2, "Pontos Turisticos");
            break;
        case 5:
            Carta1v2 = densidade1;
            Carta2v2 = densidade2;
            strcpy(Escolha2, "Densidade");
            break;
        default:
            printf("Opção inválida!\n");
            return 0;
    }

    // RESULTADO
    Resultado1 = Carta1v1 + Carta1v2;
    Resultado2 = Carta2v1 + Carta2v2;

    printf("Cidade 1: %s\n", nomeCidade1);
    printf("Cidade 2: %s\n", nomeCidade2);
    printf("Atributos escolhidos: %s e %s\n", Escolha1, Escolha2);
    printf("Atributos da Carta 1: %2f, %2f\n", Carta1v1, Carta1v2);
    printf("Atributos da Carta 2: %2f, %2f\n", Carta2v1, Carta2v2);
    printf("Soma da Carta 1: %2f\n", Resultado1);
    printf("Soma da Carta 2: %2f\n", Resultado2);


    if (Resultado1 > Resultado2)
        printf("Carta 1 venceu!\n");
    else if (Resultado2 > Resultado1)
        printf("Carta 2 venceu!\n");
    else
        printf("Empate!\n");

    break;

case 2:
    printf("\n--- REGRAS ---\n");
    printf("O jogador cadastra duas cartas.\n");
    printf("Depois, os atributos serao comparados.\n");
    printf("A carta com melhores valores vence!\n");
    break;

case 3:
    printf("Saindo do jogo.....\n");
    break;

default:
    printf("Opção inválida!\n");
    break;
}

return 0;
}
