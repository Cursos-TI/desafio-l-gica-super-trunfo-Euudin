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
    super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pib_per_capita1 + (1.0 / densidade1);
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade2);

    
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Escolha de atributos: ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    // Primeira escolha de atributo
    int opcao1; // Escolhendo atributo
    printf("\n");
    printf("[1] - População\n");
    printf("[2] - Área\n");
    printf("[3] - PIB\n");
    printf("[4] - Pontos Turísticos\n");
    printf("[5] - Densidade Populacional\n");
    printf("[6] - PIB per Capita\n");
    printf("[7] - Super Poder\n");
    printf("Escolha o atributo de comparação: ");
    scanf("%d",&opcao1);
    printf("\n");


    int resultado1 = -1, atribuicao1 = 0, valor1 = 0; 

    // Escolha de atributos 1
    switch (opcao1){
        case 1:
            if (populacao1 == populacao2)
                { printf("Valores iguais\n"); }
            else {
                resultado1 = (populacao1 > populacao2) ? 1 : 0;
                atribuicao1 = 1;
                valor1 = (populacao1 > populacao2) ? populacao1 : populacao2;
            }
        break;
        
        case 2:            
            if (area1 == area2)
                {printf("Valores iguais\n");}
            else{
                resultado1 = (area1 > area2) ? 1 : 0;
                atribuicao1 = 2;
                valor1 = (area1 > area2) ? area1 : area2;
            }
        break;

        case 3:            
            if (pib1 == pib2)
                {printf("Valores iguais\n");}
            else{
                resultado1 = (pib1 > pib2) ? 1 : 0;
                atribuicao1 = 3;
                valor1 = (pib1 > pib2) ? pib1 : pib2;
            }
        break;

        case 4:
            if (pontos_turisticos1 == pontos_turisticos2)
                {printf("Valores iguais\n");}
            else{
                resultado1 = (pontos_turisticos1 > pontos_turisticos2) ? 1 : 0;
                atribuicao1 = 4;
                valor1 = (pontos_turisticos1 > pontos_turisticos2) ? pontos_turisticos1 : pontos_turisticos2;
            }
        break;

        case 5:
            if (densidade1 == densidade2)
                {printf("Valores iguais\n");}
            else{
                resultado1 = (densidade1 < densidade2) ? 1 : 0;
                atribuicao1 = 5;
                valor1 = (densidade1 < densidade2) ? densidade1 : densidade2;
            }
        break;

        case 6:
            if (pib_per_capita1 == pib_per_capita2)
                {printf("Valores iguais\n");}
            else{
                resultado1 = (pib_per_capita1 > pib_per_capita2) ? 1 : 0;
                atribuicao1 = 6;
                valor1 = (pib_per_capita1 > pib_per_capita2) ? pib_per_capita1 : pib_per_capita2;
            }
        break;

        case 7:            
            if (super_poder1 == super_poder2)
                {printf("Valores iguais\n");}
            else{
                resultado1 = (super_poder1 > super_poder2) ? 1 : 0;
                atribuicao1 = 7;
                valor1 = (super_poder1 > super_poder2) ? super_poder1 : super_poder2;
            }
        break;

        default:
            printf("Valor invalido\n");
        break;
    }

    // Segunda escolha de atributo
    int opcao2; // Escolhendo atributo
    printf("\n");
    printf("[1] - População\n");
    printf("[2] - Área\n");
    printf("[3] - PIB\n");
    printf("[4] - Pontos Turísticos\n");
    printf("[5] - Densidade Populacional\n");
    printf("[6] - PIB per Capita\n");
    printf("[7] - Super Poder\n");
    printf("Escolha o atributo diferente do anterior: ");
    scanf("%d",&opcao2);
    printf("\n");


    int resultado2 = -1, atribuicao2 = 0, valor2 = 0; 

    if (opcao1 == opcao2)
        {printf("Você já escolheu esse atributo antes\n");}
    else{
        switch (opcao2){
            case 1:
                if (populacao1 == populacao2)
                    { printf("Valores iguais\n"); }
                else {
                    resultado2 = (populacao1 > populacao2) ? 1 : 0;
                    atribuicao2 = 1;
                    valor2 = (populacao1 > populacao2) ? populacao1 : populacao2;
                }
            break;
            
            case 2:            
                if (area1 == area2)
                    {printf("Valores iguais\n");}
                else{
                    resultado2 = (area1 > area2) ? 1 : 0;
                    atribuicao2 = 2;
                    valor2 = (area1 > area2) ? area1 : area2;
                }
            break;

            case 3:            
                if (pib1 == pib2)
                    {printf("Valores iguais\n");}
                else{
                    resultado2 = (pib1 > pib2) ? 1 : 0;
                    atribuicao2 = 3;
                    valor2 = (pib1 > pib2) ? pib1 : pib2;
                }
            break;

            case 4:
                if (pontos_turisticos1 == pontos_turisticos2)
                    {printf("Valores iguais\n");}
                else{
                    resultado2 = (pontos_turisticos1 > pontos_turisticos2) ? 1 : 0;
                    atribuicao2 = 4;
                    valor2 = (pontos_turisticos1 > pontos_turisticos2) ? pontos_turisticos1 : pontos_turisticos2;
                }
            break;

            case 5:
                if (densidade1 == densidade2)
                    {printf("Valores iguais\n");}
                else{
                    resultado2 = (densidade1 < densidade2) ? 1 : 0;
                    atribuicao2 = 5;
                    valor2 = (densidade1 < densidade2) ? densidade1 : densidade2;
                }
            break;

            case 6:
                if (pib_per_capita1 == pib_per_capita2)
                    {printf("Valores iguais\n");}
                else{
                    resultado2 = (pib_per_capita1 > pib_per_capita2) ? 1 : 0;
                    atribuicao2 = 6;
                    valor2 = (pib_per_capita1 > pib_per_capita2) ? pib_per_capita1 : pib_per_capita2;
                }
            break;

            case 7:            
                if (super_poder1 == super_poder2)
                    {printf("Valores iguais\n");}
                else{
                    resultado2 = (super_poder1 > super_poder2) ? 1 : 0;
                    atribuicao2 = 7;
                    valor2 = (super_poder1 > super_poder2) ? super_poder1 : super_poder2;
                }
            break;

            default:
                printf("Valor invalido\n");
            break;
        }
    }

    // terceira escolha de atributo
    int opcao3; // Escolhendo atributo
    printf("\n");
    printf("[1] - População\n");
    printf("[2] - Área\n");
    printf("[3] - PIB\n");
    printf("[4] - Pontos Turísticos\n");
    printf("[5] - Densidade Populacional\n");
    printf("[6] - PIB per Capita\n");
    printf("[7] - Super Poder\n");
    printf("[8] - Escolher nenhum atributo\n");
    printf("Escolha o atributo diferente do anterior: ");
    scanf("%d",&opcao3);
    printf("\n");


    int resultado3 = -1, atribuicao3 = 0, valor3 = 0; 
    int skip_terceiro = 0;

    if (opcao3 == 8) {
        printf("Nenhum atributo escolhido\n");
        skip_terceiro = 1;
    } else if (opcao3 == opcao1 || opcao3 == opcao2) {
        printf("Você já escolheu esse atributo antes\n");
        skip_terceiro = 1;
    } else {
        switch (opcao3){
            case 1:
                if (populacao1 == populacao2)
                    { printf("Valores iguais\n"); }
                else {
                    resultado3 = (populacao1 > populacao2) ? 1 : 0;
                    atribuicao3 = 1;
                    valor3 = (populacao1 > populacao2) ? populacao1 : populacao2;
                }
            break;
            
            case 2:            
                if (area1 == area2)
                    {printf("Valores iguais\n");}
                else{
                    resultado3 = (area1 > area2) ? 1 : 0;
                    atribuicao3 = 2;
                    valor3 = (area1 > area2) ? area1 : area2;
                }
            break;

            case 3:            
                if (pib1 == pib2)
                    {printf("Valores iguais\n");}
                else{
                    resultado3 = (pib1 > pib2) ? 1 : 0;
                    atribuicao3 = 3;
                    valor3 = (pib1 > pib2) ? pib1 : pib2;
                }
            break;

            case 4:
                if (pontos_turisticos1 == pontos_turisticos2)
                    {printf("Valores iguais\n");}
                else{
                    resultado3 = (pontos_turisticos1 > pontos_turisticos2) ? 1 : 0;
                    atribuicao3 = 4;
                    valor3 = (pontos_turisticos1 > pontos_turisticos2) ? pontos_turisticos1 : pontos_turisticos2;
                }
            break;

            case 5:
                if (densidade1 == densidade2)
                    {printf("Valores iguais\n");}
                else{
                    resultado3 = (densidade1 < densidade2) ? 1 : 0;
                    atribuicao3 = 5;
                    valor3 = (densidade1 < densidade2) ? densidade1 : densidade2;
                }
            break;

            case 6:
                if (pib_per_capita1 == pib_per_capita2)
                    {printf("Valores iguais\n");}
                else{
                    resultado3 = (pib_per_capita1 > pib_per_capita2) ? 1 : 0;
                    atribuicao3 = 6;
                    valor3 = (pib_per_capita1 > pib_per_capita2) ? pib_per_capita1 : pib_per_capita2;
                }
            break;

            case 7:            
                if (super_poder1 == super_poder2)
                    {printf("Valores iguais\n");}
                else{
                    resultado3 = (super_poder1 > super_poder2) ? 1 : 0;
                    atribuicao3 = 7;
                    valor3 = (super_poder1 > super_poder2) ? super_poder1 : super_poder2;
                }
            break;

            default:
                printf("Valor invalido\n");
                skip_terceiro = 1;
            break;
        }
    }


    // Mostra carta vencedora
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Vencedor: ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    printf("\nPaíses/Cidades: %s e %s\n", cidade1, cidade2); // Nome dos países/cidades
    printf("\nAtributo escolhido: \n");

    switch (atribuicao1) {
        case 1:
            printf("População, ");
        break;

        case 2:    
            printf("Área, ");
        break;

        case 3:
            printf("PIB, ");
        break;

        case 4:
            printf("Pontos Turísticos, ");
        break;

        case 5:
            printf("Densidade Populacional, ");
        break;

        case 6:
            printf("PIB per Capita, ");
        break;

        case 7:
            printf("Super Poder, ");
        break;

        default:
            printf("Opção inválida.");
        break;
    }

    switch (atribuicao2) {
        case 1:
            printf("População, ");
        break;

        case 2:    
            printf("Área, ");
        break;

        case 3:
            printf("PIB, ");
        break;

        case 4:
            printf("Pontos Turísticos, ");
        break;

        case 5:
            printf("Densidade Populacional, ");
        break;

        case 6:
            printf("PIB per Capita, ");
        break;

        case 7:
            printf("Super Poder, ");
        break;

        default:
            printf("Opção inválida,");
        break;
    }

    switch (atribuicao3) {
        case 1:
            printf("População.\n");
        break;

        case 2:    
            printf("Área.\n");
        break;

        case 3:
            printf("PIB.\n");
        break;

        case 4:
            printf("Pontos Turísticos.\n");
        break;

        case 5:
            printf("Densidade Populacional.\n");
        break;

        case 6:
            printf("PIB per Capita.\n");
        break;

        case 7:
            printf("Super Poder.\n");
        break;

        case 8:
            printf("Nenhum atributo escolhido.\n");
        break;

        default:
            printf("Opção inválida.\n");
        break;
    }

    printf("\nValores de cada atributo: \n");

    printf("\n    Carta 1:\n");
    printf("        População: %lu\n", populacao1);
    printf("        Área: %.2f km²\n", area1);
    printf("        PIB: %.2f Bilhões de reais\n", pib1);
    printf("        Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("        Densidade populacional %.2f hab/km²\n", densidade1);
    printf("        PIB per Capita: %.2f R$\n", pib_per_capita1);

    printf("\n    Carta 2:\n");
    printf("        População: %lu\n", populacao2);
    printf("        Área: %.2f km²\n", area2);
    printf("        PIB: %.2f Bilhões de reais\n", pib2);
    printf("        Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("        Densidade populacional %.2f hab/km²\n", densidade2);
    printf("        PIB per Capita: %.2f R$\n", pib_per_capita2);

    printf("\nSuper poder :\n");
    printf("    Carta 1: %.2f\n", super_poder1);  // Corrigido o formato para ".2f"
    printf("    Carta 2: %.2f\n", super_poder2);  // Corrigido o formato para ".2f"

    int contador1 = 0, contador2 = 0; // Conta os pontos finais

    if (resultado1 == 1 ) { 
        contador1++;

        if (resultado2 == 1){
            contador1++;

            if (resultado3 == 1){
                contador1++;

            } else { contador2++; }

        } else { contador2++; }

    } else {contador2++; }

    // Vencedor
    if (contador1 == contador2)
        {printf("\nEmpate. Não houve vencedores\n ");}

    else if (contador1 > 2) 
        {printf("\nO vencedor foi a carta 1\n ");}

    else 
        {printf("\nO vencedor foi a carta 2\n ");}

    return 0;
}

