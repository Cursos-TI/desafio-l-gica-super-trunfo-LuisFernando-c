#include <stdio.h>

    int main(){     
     // Área para definição das variáveis para armazenar as propriedades das cidades
     // varaaveis do pais 01

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


  //variaveis do pais 02

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

  // Área para entrada de dados
  // Entrada de dados do pais 01

  printf("=== Cadastro do pais 01 ====\n");

  printf("Digite o estado (uma letra de A a H): ");
  scanf(" %c", &estado1);

  printf("Digite o nome da cidade: ");
  scanf(" %s", &nomeCidade1);

  printf("Digite o codigo da carta (ex: A01): ");
  scanf("%s", &codigo1);

  printf("Digite a populacao: ");
  scanf("%d", &populacao1);
  
  printf("Digite a area (em kM²):" );
  scanf("%f", &area1);

  printf("Digite o PiB: ");
  scanf("%f", &pib1);

  printf("Numeros de pontos turisticos: ");
  scanf("%d", &pontosTuristicos1);

  // Varivel de calculo nivel aventureiro  carta 01

    DensidadePopulacional1 = populacao1 / area1;
    PIBperCapita1 = pib1 / populacao1;
    SuperPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + PIBperCapita1 + (1.0f / DensidadePopulacional1);



  // Entrada de dados do pais 02

   printf("=== Cadastro do pais 02 ====\n");

  printf("Digite o estado (uma letra de A a H): ");
  scanf(" %c", &estado2);

  printf("Digite o nome da cidade: ");
  scanf(" %s", &nomeCidade2);

  printf("Digite o codigo da carta (ex: B02): ");
  scanf("%s", &codigo2);

  printf("Digite a populacao: ");
  scanf("%d", &populacao2);
  
  printf("Digite a area (em kM²): " );
  scanf("%f", &area2);

  printf("Digite o PiB: ");
  scanf("%f", &pib2);

  printf("Numeros de pontos turisticos: ");
  scanf("%d", &pontosTuristicos2);

  // Varivel de calculo nivel aventureiro carta 02


    DensidadePopulacional2 = populacao2 / area2;
    PIBperCapita2 = pib2 / populacao2;
    SuperPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + PIBperCapita2 + (1.0f / DensidadePopulacional2);

   // Área para exibição dos dados do pais
   // Exibindo para o usuario Pais 01

   printf("\n===============================================\n");
   printf("Carta 01:\n");
   printf("Estado: %c\n", estado1);
   printf("Nome da cidade: %s\n", nomeCidade1);
   printf("Codigo da carta: %s\n", codigo1);
   printf("Populacao: %d\n", populacao1);
   printf("Tamanho daa area: %.2f Km²\n", area1 );
   printf("PIB: %.2f bilhoes de reais\n", pib1);
   printf("Pontos turisticos: %d\n", pontosTuristicos1);

   // Exibindo o para o usuario o calculo da desidade1, pib per capita1, superpoder1;

   printf("A densidade populacional e: %.2f hab/km²\n", DensidadePopulacional1);
   printf("O pib per capita e: %.2f reais\n", PIBperCapita1);
   printf("O Super poder e: %f\n", SuperPoder1);
   

   // Exibindo para o usuario a carta Pais 02

   printf("\n===============================================\n");
   printf("Carta 02:\n");
   printf("Estado: %c\n", estado2);
   printf("Nome da cidade: %s\n", nomeCidade2);
   printf("Codigo da carta: %s\n", codigo2);
   printf("Populacao: %d\n", populacao2);
   printf("Tamanho daa area: %.2f Km²\n", area2 );
   printf("PIB: %.2f bilhoes de reais\n", pib2);
   printf("Pontos turisticos: %d\n", pontosTuristicos2);

   // Exibindo o para o usuario o calculo da desidade2, pib per capita2, super poder2;

   printf("A densidade populacional e: %.2f hab/km²\n", DensidadePopulacional2);
   printf("O pib per capita e: %.2f reais\n", PIBperCapita2);
   printf("O Super poder e: %f\n", SuperPoder2);


   // Exibendo para o usuraio a comaracao de cartas, maior ou menor


    printf("=============== COMPARACAO DE CARTAS ===================\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);

    // densidade: MENOR vence → Carta 1 vence se densidade1 < densidade2
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", DensidadePopulacional1 < DensidadePopulacional2);

    printf("PIB per Capita: Carta 1 venceu (%d)\n", PIBperCapita1 > PIBperCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", SuperPoder1 > SuperPoder2);

    // COMPARANDO O ATRIBUTO ESCULHIDO ATRVES DE IF DE ELSE 
    
    printf("==========  ESCOLHA DE ATRIBUTO PARA COMPARACAO ============\n");

    printf("O atributo escolhido foi POPULACAO:\n POPULACAO CARTA 01: %d\n POPULACAO CARTA 02: %d\n", populacao1 , populacao2);

    if ( populacao1 > populacao2){
    printf("ATRIBUTO CARTA 01 VENCEU !!!\n");
    }
    else{ printf("ATRIBUTO CARTA 02 VENCEU !!!\n");
    }


  return 0;




    }