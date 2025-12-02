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

     int opcao;

    printf("=== MENU DE ATRIBUTOS DO SUPER TRUNFO ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per Capita \n");
    printf("7 - Super poder\n");
    printf("\nDigite sua opção: ");
    scanf("%d", &opcao);

    printf("\n=== Comparação de Cartas ===\n\n");

    // -----------------------------------------------------
    // SWITCH PARA SELECIONAR ATRIBUTO
    // Comparações com IF-ELSE aninhado
    // -----------------------------------------------------
    switch (opcao) {

        case 1:  // População
            printf("Atributo escolhido: POPULACAO\n\n");
            printf("%s: %d habitantes\n", nomeCidade1, populacao1);
            printf("%s: %d habitantes\n\n", nomeCidade2, populacao2);

            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", nomeCidade1);
            } else {
                if (populacao2 > populacao1) {
                    printf("Resultado: %s venceu!\n", nomeCidade2);
                } else {
                    printf("Resultado: Empate!\n");
                }
            }
            break;



        case 2:  // Área
            printf("Atributo escolhido: AREA\n\n");
            printf("%s: %.2f km²\n", nomeCidade1, area1);
            printf("%s: %.2f km²\n\n", nomeCidade2, area2);

            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", nomeCidade1);
            } else {
                if (area2 > area1) {
                    printf("Resultado: %s venceu!\n", nomeCidade2);
                } else {
                    printf("Resultado: Empate!\n");
                }
            }
            break;



        case 3:  // PIB
            printf("Atributo escolhido: PIB (trilhoes)\n\n");
            printf("%s: %.2f trilhões\n", nomeCidade1, pib1);
            printf("%s: %.2f trilhões\n\n", nomeCidade2, pib2);

            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", nomeCidade1);
            } else {
                if (pib2 > pib1) {
                    printf("Resultado: %s venceu!\n", nomeCidade2);
                } else {
                    printf("Resultado: Empate!\n");
                }
            }
            break;



        case 4:  // Pontos Turísticos
            printf("Atributo escolhido: PONTOS TURISTICOS\n\n");
            printf("%s: %d pontos\n", nomeCidade1, pontosTuristicos1);
            printf("%s: %d pontos\n\n", nomeCidade2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: %s venceu!\n", nomeCidade1);
            } else {
                if (pontosTuristicos2 > pontosTuristicos1) {
                    printf("Resultado: %s venceu!\n", nomeCidade2);
                } else {
                    printf("Resultado: Empate!\n");
                }
            }
            break;



        case 5:  // Densidade — menor vence
            printf("Atributo escolhido: DENSIDADE DEMOGRAFICA\n\n");
            printf("%s: %.4f hab/km²\n", nomeCidade1, DensidadePopulacional1);
            printf("%s: %.4f hab/km²\n\n", nomeCidade2, DensidadePopulacional2);

            if (DensidadePopulacional1 < DensidadePopulacional2) {
                printf("Resultado: %s venceu! (menor densidade)\n", nomeCidade1);
            } else {
                if (DensidadePopulacional2 < DensidadePopulacional1) {
                    printf("Resultado: %s venceu! (menor densidade)\n", nomeCidade2);
                } else {
                    printf("Resultado: Empate!\n");
                }
            }
            break;


        case 6: // PIBpercapita 
              printf("Atributo escolhido: PIB PER CAPITA \n");
              printf("%s: %.2f Reais \n", nomeCidade1, PIBperCapita1);
              printf("%s: %.2f Reais \n", nomeCidade2, PIBperCapita2);  

              if (PIBperCapita1 > PIBperCapita2) {
                     printf("Resultado: %s venceu! \n", nomeCidade1);
              } else if 
                     (PIBperCapita2 > PIBperCapita1) {
                      printf("Resultado: %s venceu! \n", nomeCidade2);      
                     } 
                else {
                     printf("Resultado: Empate! \n");
                }    
                                   

              break;

        case 7: // Super Poder  
              printf("Atributo escolhido: SUPER PODER \n");
              printf("%s: %.2f Reais \n", nomeCidade1, SuperPoder1);
              printf("%s: %.2f Reais \n", nomeCidade2, SuperPoder2);  

              if (SuperPoder1 > SuperPoder2) {
                     printf("Resultado: %s venceu! \n", nomeCidade1);
              } else if 
                 (SuperPoder2 > SuperPoder1) {
                     printf("Resultado: %s venceu! \n", nomeCidade2);
                 } else {
                     printf("Resultado: Empate \n");
                 }   


              break;    

                



        default:
            printf("Opcao invalida! Escolha um número de 1 a 7.\n");
            break;
    }

  return 0;



    }