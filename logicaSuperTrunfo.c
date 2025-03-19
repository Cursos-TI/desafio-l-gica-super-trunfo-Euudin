#include <stdio.h>

// Programa principal
int main() {

    // Declaração de variáveis para armazenar os dados das duas cidades
    char cidade1[20], cidade2[20]; // Nomes das cidades
    unsigned long int populacao1, populacao2; // População (valores positivos grandes)
    float area1, pib1, area2, pib2; // Área em km² e PIB em bilhões
    int pontos_turisticos1, pontos_turisticos2; // Quantidade de pontos turísticos
    float densidade1, pib_per_capita1, super_poder1, densidade2, pib_per_capita2, super_poder2; // Valores calculados

    // Entrada de dados para a primeira cidade
    printf("\n------------------------ Cadastro da Carta 1:------------------------\n");
    printf("Nome da Cidade: ");
    scanf("%s", cidade1); // Lê o nome da cidade 1
    printf("População: ");
    scanf("%lu", &populacao1); // Lê a população
    printf("Área: ");
    scanf("%f", &area1); // Lê a área
    printf("PIB: ");
    scanf("%f", &pib1); // Lê o PIB
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1); // Lê pontos turísticos

    // Cálculos para a primeira cidade
    densidade1 = (float)populacao1 / area1; // Densidade populacional (hab/km²)
    pib_per_capita1 = pib1 / (float)populacao1; // PIB por habitante (R$)

    // Exibição dos dados processados da primeira cidade
    printf("\n------------------------ Dados da Carta 1:------------------------\n");
    printf("Carta: 1\n");
    printf("Estado: A\n"); // Estado fixo
    printf("Código: A01\n"); // Código fixo
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f R$\n", pib_per_capita1);

    // Entrada de dados para a segunda cidade (mesmo processo da primeira)
    printf("\n------------------------ Cadastro da Carta 2:------------------------\n");
    printf("Nome da Cidade: ");
    scanf("%s", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos para a segunda cidade
    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 / (float)populacao2;

    // Exibição dos dados processados da segunda cidade
    printf("\n------------------------ Dados da Carta 2:------------------------\n");
    printf("Carta: 2\n");
    printf("Estado: B\n");
    printf("Código: B02\n");
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f R$\n", pib_per_capita2);

    // Cálculo do Super Poder
    // Quanto menor o valor, melhor. Fórmula inclui inverso da densidade.
    super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pib_per_capita1 + (1.0 / densidade1);
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade2);

    // Comparação entre as cartas (0 = Carta 2 venceu, 1 = Carta 1 venceu)
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Comparação de Cartas: ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int opcao; // contar a quantidades de pontos
    printf("[1] - População:\n");
    printf("[2] - Área:\n");
    printf("[3] - PIB:\n");
    printf("[4] - Pontos Turísticos:\n");
    printf("[5] - Densidade Populacional:\n");
    printf("[6] - PIB per Capita:\n");
    printf("[7] - Super Poder:\n");
    printf("Escolha o atributo de comparação: ");
    scanf("%d",&opcao);

    // Mostra carta vencedora
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Vencedor: ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    printf("Países/Cidade: %s e %s\n", cidade1, cidade2);


    // Nome do pais/cidade vencedora 
    switch (opcao) {
        case 1:
            // Compara população: maior valor vence
            printf("Atributo escolhido: População\n");

            printf("População: ");
            if (populacao1 > populacao2)
                {printf("%lu \nCarta 1 Venceu!\n",populacao1);} 

            else if (populacao1 < populacao2)
                {printf("%lu \nCarta 2 Venceu!\n",populacao2);}

            else {printf("Empate.\n");}
        break;

        case 2:    
            // Compara área: maior valor vence
            printf("Atributo escolhido: Área\n");

            printf("Área: ");
            if (area1 > area2)
                {printf("%.2f km²\nCarta 1 Venceu!\n",area1);}

            else if (area1 < area2)
                {printf("%.2f km²\nCarta 2 Venceu!\n",area2);}

            else {printf("Empate.\n");}
        break;

        case 3:
            // Compara PIB: maior valor vence
            printf("Atributo escolhido: PIB\n");

            printf("PIB: ");
            if (pib1 > pib2)
                {printf("%.2f Bilhões de reais \nCarta 1 Venceu!\n",pib1);}

            else if (pib1 < pib2)
                {printf("%.2f Bilhões de reais \nCarta 2 Venceu!\n",pib2);}

            else {printf("Empate.\n");}
        break;

        case 4:
            // Compara pontos turísticos: maior quantidade vence
            printf("Atributo escolhido: Pontos Turísticos\n");

            printf("Pontos Turísticos: ");
            if (pontos_turisticos1 > pontos_turisticos2)
                {printf("%d \nCarta 1 Venceu!\n", pontos_turisticos1);}

            else if (pontos_turisticos1 < pontos_turisticos2)
                {printf("%d \nCarta 2 Venceu!\n", pontos_turisticos2);}
            
            else {printf("Empate.\n");}
        break;

        case 5:
            // Compara densidade: MENOR densidade vence
            printf("Atributo escolhido: Densidade Populacional\n");
            
            printf("Densidade Populacional: ");
            if (densidade1 < densidade2)
                {printf("%.2f hab/km² \nCarta 1 Venceu!\n", densidade1);}

            else if (densidade1 > densidade2)
                {printf("%.2f hab/km² \nCarta 2 Venceu!\n", densidade2);}
            
            else {printf("Empate.\n");}
        break;

        case 6:
            // Compara PIB per capita: maior quantidade vence
            printf("Atributo escolhido: PIB per capita\n");

            printf("PIB per Capita: ");
            if (pib_per_capita1 > pib_per_capita2)
                {printf(" %.2f R$ \nCarta 1 Venceu!\n", pib_per_capita1);}

            else if (pib_per_capita1 < pib_per_capita2)
                {printf(" %.2f R$ \nCarta 2 Venceu!\n", pib_per_capita2);}

            else {printf("Empate.\n");}
        break;
        case 7:
            // Compara "Super Poder": maior quantidade vence
            printf("Atributo escolhido: Super Poder\n");

            printf("Super Poder: ");
            if (super_poder1 > super_poder2)
                {printf("%.2f \nCarta 1 Venceu!\n", super_poder1);}

            else if (super_poder1 < super_poder2)
                {printf("%.2f \nCarta 2 Venceu!\n", super_poder2);}
            
            else {printf("Empate.\n");}
        break;

        default:
            printf("Opção invalida.");
        break;
    }
    return 0;
}