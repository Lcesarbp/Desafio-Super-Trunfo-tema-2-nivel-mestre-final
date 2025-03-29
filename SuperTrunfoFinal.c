#include <stdio.h>


int main() {

   //Declaração de variaveis do código
   //========================================================

   int opcao1, opcao2, resultado, somatotal1, somatotal2, soma1, soma2, soma3, soma4;

   //Declaração de variaveis carta 1

    char Estado[5];
    char codigodacarta[10];
    char nomedacidade[60];
    int populacao;
    float area;
    float pib;
    int numpontoturistico;
    float denpopulacional;
    float pibpercapita;
    float superpoder;

    //Declaração de variaveis carta 2

    char Estado2[5];
    char codigodacarta2[10];
    char nomedacidade2[60];
    int populacao2;
    float area2;
    float pib2;
    int numpontoturistico2;
    float denpopulacional2;
    float pibpercapita2;
    float superpoder2;
    int resultadopop = 0;
    int resultadoarea = 0;
    int resultadopib = 0;
    int resultadonpt = 0;
    int resultadoden = 0;
    int resultadoppc = 0;
    int resultadosuper = 0;



    //cadastro dos atributos das cartas
    //==============================================================

    //cadastro dos atributos da carta 1

    printf("\n==========================================================\n");
    printf("          CADASTRANDO AS INFORMAÇÕES DA CARTA 1\n");
    printf("==========================================================\n\n");

    printf("Insira um estado: ");
    scanf("%s", Estado);
    printf("O Estado cadastrado é: %s \n\n", Estado);

    //Cadastro e exibição do código da carta

    printf("Insira o codigo da carta: ");
    scanf("%s", codigodacarta);
    printf("O código da carta cadastrado é: %s\n\n", codigodacarta);

    //Cadastro e exibição do nome da cidade

    printf("Insira o nome da cidade: ");
    scanf(" %s", nomedacidade);
    printf("O nome cadastrado para a cidade é: %s\n\n", nomedacidade);

    //Cadastro e exibição do número da população

    printf("Insira o número de população: ");
    scanf("%d", &populacao);
    printf("O número de população é: %d\n\n", populacao);  

    //Cadastro e exibição da área da cidade

    printf("Insira a area da cidade ");
    scanf("%f", &area);
    printf("A área da cidade é: %.2f Km2\n\n",area );

    //Cadastro e exibição do PIB da cidade

    printf("Insira o PIB da cidade: ");
    scanf("%f", &pib);
    printf("O PIB da cidade é: %.2f\n\n", pib);

    //Cadastro e exibição do número de pontos turísticos

    printf("Insira a quantidade de pontos turisticos ");
    scanf("%d", &numpontoturistico);
    printf("A quantidade de pontos turisticos cadastrada é: %d\n\n", numpontoturistico);

    //Local dos calculos da carta 1
    //===========================================

    //Calculo da densidade populacional

    denpopulacional = populacao / area;

    //Cálculo do PIB per Capita

    pibpercapita = pib / populacao;

    //Calculo super poder

    superpoder = (float) populacao + area + pib + (float) numpontoturistico + (1/denpopulacional) + pibpercapita;

    ////cadastro dos atributos da carta 2

    printf("\n==========================================================\n");
    printf("          CADASTRANDO AS INFORMAÇÕES DA CARTA 2\n");
    printf("==========================================================\n\n");

    printf("Insira um estado ");
    scanf("%s", Estado2);
    printf("O Estado cadastrado é: %s \n\n", Estado2);

    //Cadastro e exibição do código da carta

    printf("Insira o codigo da carta: ");
    scanf("%s", codigodacarta2);
    printf("O código da carta cadastrado é: %s\n\n", codigodacarta2);

    //Cadastro e exibição do nome da cidade

    printf("Insira o nome da cidade: ");
    scanf("%s", nomedacidade2);
    printf("O nome cadastrado para a cidade é: %s\n\n", nomedacidade2);

    //Cadastro e exibição do número da população

    printf("Insira o número de população: ");
    scanf("%d", &populacao2);
    printf("O número de população é: %d\n\n", populacao2);  

    //Cadastro e exibição da área da cidade

    printf("Insira a area da cidade ");
    scanf("%f", &area2);
    printf("A área da cidade é: %.2f Km2\n\n",area2 );

    //Cadastro e exibição do PIB da cidade

    printf("Insira o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("O PIB da cidade é: %.2f\n\n", pib2);

    //Cadastro e exibição do número de pontos turísticos

    printf("Insira a quantidade de pontos turisticos ");
    scanf("%d", &numpontoturistico2);
    printf("A quantidade de pontos turisticos cadastrada é: %d\n\n", numpontoturistico2);

     //Local dos calculos da carta 2
    //===========================================

    //Calculo da densidade populacional

    denpopulacional2 = populacao2 / area2;

    //Cálculo do PIB per Capita

    pibpercapita2 = pib2 / populacao2;

    //Calculo super poder

    superpoder2 = (float) populacao2 + area2 + pib2 + (float) numpontoturistico2 + (1/denpopulacional2) + pibpercapita2;


    //Exibição dos atributos das cartas cadastradas

    //Exibição dos atributos da carta 1 

    printf("\n===========================================\n");
    printf("           INFORMAÇÕES DA CARTA 1\n");
    printf("===========================================\n\n");

    printf("Estado: %s\n", Estado);
    printf("Código da Carta: %s\n", codigodacarta);
    printf("Nome da Cidade: %s\n", nomedacidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f Km2\n", area);
    printf("PIB: %.2f Bilhões de Reais\n", pib);
    printf("Números de pontos turísticos: %d\n", numpontoturistico);
    printf("Densidade Populacional: %.2f \n", denpopulacional);
    printf("PIB per Capita: %.2f \n", pibpercapita);
    printf("Super Poder: %.2lf\n", superpoder);

    //Exibição dos atributos da carta 2

    printf("\n===========================================\n");
    printf("           INFORMAÇÕES DA CARTA 2\n");
    printf("===========================================\n\n");

    printf("Estado: %s\n", Estado2);
    printf("Código da Carta: %s\n", codigodacarta2);
    printf("Nome da Cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km2\n", area2);
    printf("PIB: %.2f Bilhões de Reais\n", pib2);
    printf("Números de pontos turísticos: %d\n", numpontoturistico2);
    printf("Densidade Populacional: %.2f \n", denpopulacional2);
    printf("PIB per Capita: %.2f \n", pibpercapita2);
    printf("Super Poder: %.2lf", superpoder2);


   //Comparação das cartas
    
    printf("\n\n===========================================\n");
    printf("           COMPARAÇÃO ENTRE AS CARTAS \n");
    printf("===========================================\n\n");

    //Menu interativo para escolha do primeiro atributo que irá ser comparado

    printf("Menu de Comparação do Super Trunfo\n\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Números de Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n\n");

    printf("Escolha dois atributos Digitando os números dos atributos que serão usados na comparação conforme menu acima: \n");
    printf("Escolha o primeiro atributo a ser comparado ");
    scanf("%d", &opcao1);

    //Area que prepara o menu para a escolha do segundo atributo tirando sempre o que foi escolhido com primeiro atributo

    switch (opcao1)
    {
    case 1:
   
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Números de Pontos Turísticos\n");
        printf("5 - Densidade Populacional\n");
        printf("6 - PIB per Capita\n");
        printf("7 - Super Poder\n\n");

        break;

        case 2:
        printf("1 - População\n");
        printf("3 - PIB\n");
        printf("4 - Números de Pontos Turísticos\n");
        printf("5 - Densidade Populacional\n");
        printf("6 - PIB per Capita\n");
        printf("7 - Super Poder\n\n");
        break;

        case 3:
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("4 - Números de Pontos Turísticos\n");
        printf("5 - Densidade Populacional\n");
        printf("6 - PIB per Capita\n");
        printf("7 - Super Poder\n\n");

        break;

        case 4:
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("5 - Densidade Populacional\n");
        printf("6 - PIB per Capita\n");
        printf("7 - Super Poder\n\n");

        break;

        case 5:
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Números de Pontos Turísticos\n");
        printf("6 - PIB per Capita\n");
        printf("7 - Super Poder\n\n");

        break;

        case 6:
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Números de Pontos Turísticos\n");
        printf("5 - Densidade Populacional\n");
        printf("7 - Super Poder\n\n");

        break;

        case 7:
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Números de Pontos Turísticos\n");
        printf("5 - Densidade Populacional\n");
        printf("6 - PIB per Capita\n");
    
        break;
    
    default: {printf("Opção inválida");}

        break;
    }

    //Opção de escolha do segundo atributo a ser comparado.
    printf("Escolha o Segundo atributo a ser comparado ");
    scanf("%d", &opcao2);

    //Tratamento caso o usuário digite números iguais nos 2 atributos a serem comparados

    if (opcao1 == opcao2)
    {
        printf("Não pode escolher 2 atributos iguais");

        return 0;
    }
    

    //Bloco que apresenta as informações correspondentes a primeiro atributo a ser escolhido e o carregamento dos valores para a soma dos atributos
    switch (opcao1)
    {
    case 1:

    
        printf("Primeiro atributo escolhido para comparação: População\n\n");

        printf("A População da Carta 1: %s é: %d\n", nomedacidade, populacao);
        printf("A População da Carta 2: %s é: %d\n\n", nomedacidade2, populacao2);

        soma1 = populacao;
        soma2 = populacao2;


    break;

        
    {
    case 2:
    
        printf("Primeiro atributo escolhido para comparação: Área \n\n");

        printf("A Área da Carta 1: %s é: %.2f\n", nomedacidade, area);
        printf("A Área da Carta 2: %s é: %.2f\n\n", nomedacidade2, area2);

        soma1 = area;
        soma2 = area2;

    
    break;
        
    }

    {
    case 3:
    
        printf("Primeiro atributo escolhido para comparação:\n\n");

        printf("O PIB da Carta 1: %s é: %.2f\n", nomedacidade, pib);
        printf("O PIB da Carta 2: %s é: %.2f\n\n", nomedacidade2, pib2);

        soma1 = pib;
        soma2 = pib2;

    break;
            
    }
        
    {
    case 4:
   
        printf("Primeiro atributo escolhido para comparação: Número de pontos turísticos\n\n");

        printf("O Número de pontos turístico da Carta 1: %s é: %d\n", nomedacidade, numpontoturistico);
        printf("O Número de pontos turístico da Carta 2: %s é: %d\n\n", nomedacidade2, numpontoturistico2);

        soma1 = numpontoturistico;
        soma2 = numpontoturistico2;
        
    break;
                
    }

    {
    case 5:
   
        printf("Primeiro atributo escolhido para comparação: Densidade Populacional\n\n");

        printf("A Densidade Populacional da Carta 1: %s é: %.2f\n", nomedacidade, denpopulacional);
        printf("A Densidade Populacional da Carta 2: %s é: %.2f\n\n", nomedacidade2, denpopulacional2);

        soma1 = denpopulacional;
        soma2 = denpopulacional2;

    break;
                
    }

    {
    case 6:
    
        printf("Primeiro atributo escolhido para comparação: PIB per Capita)\n\n");

        printf("O PIB per Capita da Carta 1: %s é: %.2f\n", nomedacidade, pibpercapita);
        printf("O PIB per Capita da Carta 2: %s é: %.2f\n\n", nomedacidade2, pibpercapita2);

        soma1 = pib;
        soma2 = pib2;

    break;
                
    }

    {
    case 7:
    
        printf("Primeiro atributo escolhido para comparação: Super Poder)\n\n");

        printf("O Super Poder da Carta 1: %s é: %.2f\n", nomedacidade, superpoder);
        printf("O Super Poder da Carta 2: %s é: %.2f\n\n", nomedacidade2, superpoder2);

        soma1 = superpoder;
        soma2 = superpoder2;

    break;
                    
    }
    
    default:{printf("Opção inválida!!!");}

    break;
    
    }


    //Bloco que apresenta as informações correspondentes o Segundo atributo a ser escolhido e o carregamento dos valores para a soma dos atributos
    switch (opcao2)
    {
    case 1:

        printf("Segundo atributo escolhido para comparação: População\n\n");

        printf("A População da Carta 1: %s é: %d\n", nomedacidade, populacao);
        printf("A População da Carta 2: %s é: %d\n\n", nomedacidade2, populacao2);

        soma3 = populacao;
        soma4 = populacao2;

    break;

        
    {
    case 2:
    
        printf("Segundo atributo escolhido para comparação: Área \n\n");

        printf("A Área da Carta 1: %s é: %.2f\n", nomedacidade, area);
        printf("A Área da Carta 2: %s é: %.2f\n\n", nomedacidade2, area2);

        soma3 = area;
        soma4 = area2;

    
    break;
        
       
    }

    {
    case 3:
   
        printf("Segundo atributo escolhido para comparação:\n\n");

        printf("O PIB da Carta 1: %s é: %.2f\n", nomedacidade, pib);
        printf("O PIB da Carta 2: %s é: %.2f\n\n", nomedacidade2, pib2);

        soma3 = pib;
        soma4 = pib2;

    
    break;
            
    }
        
    {
    case 4:
    
        printf("Segundo atributo escolhido para comparação: Número de pontos turísticos\n\n");

        printf("O Número de pontos turístico da Carta 1: %s é: %d\n", nomedacidade, numpontoturistico);
        printf("O Número de pontos turístico da Carta 2: %s é: %d\n\n", nomedacidade2, numpontoturistico2);

        soma3 = numpontoturistico;
        soma4 = numpontoturistico2;

    
    break;
                
    }

    {
    case 5:
   
        printf("Segundo atributo escolhido para comparação: Densidade Populacional\n\n");

        printf("A Densidade Populacional da Carta 1: %s é: %.2f\n", nomedacidade, denpopulacional);
        printf("A Densidade Populacional da Carta 2: %s é: %.2f\n\n", nomedacidade2, denpopulacional2);

        soma3 = denpopulacional;
        soma4 = denpopulacional2;

    
    break;
                
               
    }

    {
    case 6:
   
        printf("Segundo atributo escolhido para comparação: PIB per Capita)\n\n");

        printf("O PIB per Capita da Carta 1: %s é: %.2f\n", nomedacidade, pibpercapita);
        printf("O PIB per Capita da Carta 2: %s é: %.2f\n\n", nomedacidade2, pibpercapita2);

        soma3 = pibpercapita;
        soma4 = pibpercapita2;

    
    break;
                
    }

    {
    case 7:
    
        printf("Segundo atributo escolhido para comparação: Super Poder)\n\n");

        printf("O Super Poder da Carta 1: %s é: %.2f\n", nomedacidade, superpoder);
        printf("O Super Poder da Carta 2: %s é: %.2f\n\n", nomedacidade2, superpoder2);

        soma3 = superpoder;
        soma4 = superpoder2;

    
    break;
                    
    }
    
    default:{printf("Opção inválida!!!");}

    break;
    }

    //Calculo das somas dos atributos da carta 1 e carta 2
        somatotal1 = soma1 + soma3;
        somatotal2 = soma2 + soma4;

        printf("O valor total de atributos da carta 1 é: %d\n", somatotal1);
        printf("O valor total de atributos da carta 2 é: %d\n", somatotal2);

    //Tratamento caso a soma dos atributos seja igual (Empate) e determinação de qual carta é a vencedora

    resultado = somatotal1 > somatotal2 ? 1:0;

    if (somatotal1 == somatotal2){
        
    printf("O jogo Empatou!!!!!");
           
    } else if(resultado == 1){

     printf("Carta 1: %s Venceu!!!\n", nomedacidade);

    }else{ printf("Carta 2: %s Venceu!!!!\n", nomedacidade2);}

    return 0;
        
}
