#include <stdio.h>

int main() {

    // ================================
    // VARIÁVEIS DA CARTA 01
    // ================================

    char estado1;
    char nomeCidade1[50];
    char codigo1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float DensidadePopulacional1;
    float PIBperCapita1;
    float SuperPoder1;

    // ================================
    // VARIÁVEIS DA CARTA 02
    // ================================

    char estado2;
    char nomeCidade2[50];
    char codigo2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float DensidadePopulacional2;
    float PIBperCapita2;
    float SuperPoder2;

    // ================================
    // CADASTRO DA CARTA 01
    // ================================

    printf("=== Cadastro do pais 01 ====\n");

    printf("Digite o estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nomeCidade1);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    
    printf("Digite a area (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos carta 01
    DensidadePopulacional1 = populacao1 / area1;
    PIBperCapita1 = pib1 / populacao1;
    SuperPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1
                 + PIBperCapita1 + (1.0f / DensidadePopulacional1);

    // ================================
    // CADASTRO DA CARTA 02
    // ================================

    printf("\n=== Cadastro do pais 02 ====\n");

    printf("Digite o estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nomeCidade2);

    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    
    printf("Digite a area (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos carta 02
    DensidadePopulacional2 = populacao2 / area2;
    PIBperCapita2 = pib2 / populacao2;
    SuperPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2
                 + PIBperCapita2 + (1.0f / DensidadePopulacional2);

    // ================================
    // EXIBIÇÃO DAS CARTAS
    // ================================

    printf("\n===============================================\n");
    printf("Carta 01 (%s):\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade: %.2f hab/km²\n", DensidadePopulacional1);
    printf("PIB per Capita: %.2f\n", PIBperCapita1);

    printf("\n===============================================\n");
    printf("Carta 02 (%s):\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade: %.2f hab/km²\n", DensidadePopulacional2);
    printf("PIB per Capita: %.2f\n", PIBperCapita2);
    printf("===============================================\n");

    // ====================================================
    // INÍCIO DO SISTEMA DE COMPARAÇÃO — DESAFIO FINAL
    // ====================================================

    int atributo1 = 0, atributo2 = 0;

    float valorA1, valorA2;  // valores para o atributo 1
    float valorB1, valorB2;  // valores para o atributo 2

    float soma1, soma2;

    // ========= MENU PARA ESCOLHER O PRIMEIRO ATRIBUTO ==========

    printf("\nEscolha o PRIMEIRO atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica (MENOR vence)\n");
    printf("6 - PIB per Capita\n");
    printf("Escolha: ");
    scanf("%d", &atributo1);

    // Validação
    if (atributo1 < 1 || atributo1 > 6) {
        printf("Opcao inválida! Encerrando...\n");
        return 0;
    }

    // ========= MENU DINÂMICO PARA O SEGUNDO ATRIBUTO ==========

    printf("\nEscolha o SEGUNDO atributo (não pode repetir):\n");

    for (int opc = 1; opc <= 6; opc++) {
        if (opc == atributo1) continue;
        switch (opc) {
            case 1: printf("1 - Populacao\n"); break;
            case 2: printf("2 - Area\n"); break;
            case 3: printf("3 - PIB\n"); break;
            case 4: printf("4 - Pontos Turisticos\n"); break;
            case 5: printf("5 - Densidade Demografica\n"); break;
            case 6: printf("6 - PIB per Capita\n"); break;
        }
    }

    printf("Escolha: ");
    scanf("%d", &atributo2);

    // Validação adicional
    if (atributo2 < 1 || atributo2 > 6 || atributo2 == atributo1) {
        printf("Opcao inválida! Encerrando...\n");
        return 0;
    }

    // ======================================================
    // FUNÇÃO AUXILIAR DE ATRIBUTO → VALOR
    // ======================================================

    float getAtributo(int opcao, float p, float a, float pi, float pt, float d, float pc) {
        switch (opcao) {
            case 1: return p;
            case 2: return a;
            case 3: return pi;
            case 4: return pt;
            case 5: return d;
            case 6: return pc;
            default: return 0;
        }
    }

    // Pegar valores do atributo 1
    valorA1 = getAtributo(atributo1, populacao1, area1, pib1, pontosTuristicos1, DensidadePopulacional1, PIBperCapita1);
    valorA2 = getAtributo(atributo1, populacao2, area2, pib2, pontosTuristicos2, DensidadePopulacional2, PIBperCapita2);

    // Pegar valores do atributo 2
    valorB1 = getAtributo(atributo2, populacao1, area1, pib1, pontosTuristicos1, DensidadePopulacional1, PIBperCapita1);
    valorB2 = getAtributo(atributo2, populacao2, area2, pib2, pontosTuristicos2, DensidadePopulacional2, PIBperCapita2);

    // ======================================================
    // REGRA DE VITÓRIA POR ATRIBUTO (Densidade menor vence)
    // ======================================================

    float pontoA = (atributo1 == 5)
        ? (valorA1 < valorA2)
        : (valorA1 > valorA2);

    float pontoB = (atributo2 == 5)
        ? (valorB1 < valorB2)
        : (valorB1 > valorB2);

    // Soma total
    soma1 = valorA1 + valorB1;
    soma2 = valorA2 + valorB2;

    // ======================================================
    // EXIBIR RESULTADOS
    // ======================================================

    printf("\n=============== RESULTADO ===============\n");
    printf("Comparando %s x %s\n", nomeCidade1, nomeCidade2);

    printf("\nAtributo 1: %d\n", atributo1);
    printf("%s: %.2f\n", nomeCidade1, valorA1);
    printf("%s: %.2f\n", nomeCidade2, valorA2);

    printf("\nAtributo 2: %d\n", atributo2);
    printf("%s: %.2f\n", nomeCidade1, valorB1);
    printf("%s: %.2f\n", nomeCidade2, valorB2);

    printf("\nSoma dos atributos:\n");
    printf("%s = %.2f\n", nomeCidade1, soma1);
    printf("%s = %.2f\n", nomeCidade2, soma2);

    // Resultado final
    if (soma1 > soma2)
        printf("\n>>> A carta vencedora é: %s !!!\n", nomeCidade1);
    else if (soma2 > soma1)
        printf("\n>>> A carta vencedora é: %s !!!\n", nomeCidade2);
    else
        printf("\n>>> EMPATE!\n");

    return 0;
}
