#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void) {    

    /*//----------- FORMAS DE LIMITAÇÃO DE STRINGS COM O SCANF--- ----------
    
    char palavras[10] = {"Oi. Vamos aprender a programar com a linguagem C?"};

    printf("Digite seu nome: ");
    scanf("%10[^\n]", palavras); // Funções do Scanf para limitar leituras de strings
    
    printf("%s", palavras);
    */

    
    /*//------------------------- USO DA FUNÇÃO FGETS ---------------------------
    
    char palavras[10] = {"Oi. Vamos aprender a programar com a linguagem C?"};

    printf("Digite seu nome: ");
    fgets(palavras, 15, stdin); // lê uma string de TECLADO 
    
    printf("%s", palavras);
    */

    
    /*//------------------ IDENTIFICAR O FINAL DE UMA STRING ------------------
    int i = 0;
    
    char palavras[55] = {"Oi. Vamos aprender a programar com a linguagem C?"};

    while(palavras[i] != '\0'){
        printf("%d = %c\n", i, palavras[i]);
        i++;
    }
    */

    /*//---------------- DESCOBRIR TAMANHO DE UMA STRING STRLEN------------------
   
    char palavras[55] = {"Oi. Vamos aprender a programar com a linguagem C?"};

    printf("Escreva algo: ");
    fgets(palavras, 55, stdin);
    
    printf("Tamanho: %d\n", strlen(palavras));
    */

    
    /*//--------------------- CONCATENANDO STRINGS COM STRCAT -----------------------
    
    char palavra1[50] = {"Oi."};
    char palavra2[50] = {" Bom dia!"};

    strcat(palavra1, palavra2);

    printf("\n\t%s\n", palavra1);
    */


    /*//----------------- COMPARANDO DUAS STRINGS COM STRCMP ----------------
    
    // 0 -> As strings são iguais
    //-1 -> A string1 é menor que a string2
    // 1 -> A string2 é menos que a string1
    
    char palavra1[50] = {"bola"};
    char palavra2[50] = {"abacate"};

    printf("\n\nResultado: %d", strcmp(palavra1, palavra2));
    */

    
    /*//-------- PROCURANDO CARACTERES EM UMA STRING COM STRCHR E STRRCHR --------

    // Strchr -> Retorna a primeira ocorrência
    // Strrchr -> Retorna a segunda ocorrência
    
    char palavra[50] = {"abacate"};
    char *letra;

    letra = strrchr(palavra, 'a');
    
    printf("\n%c\n", *letra);
    printf("\n%c\n", *(letra + 1));
    printf("\n%c\n", *(letra + 2));
    */


    /*//----------------- EMCONTRAR UMA SUBSTRING COM A FUNÇÃO STRSTR ----------------
    
    char palavra[50] = {"Bom dia simpatia"};
    char str[] = {"dia"};
    char *ponteiro;

    ponteiro = strstr(palavra, str);
    
    if(ponteiro){
        printf("\n%c%c%c\n", *ponteiro, *(ponteiro + 1), *(ponteiro + 2));
    }
    else{
        printf("Ponteiro nulo.\n");    
    }
    */


    
    /*//------ CONVERTER STRINGS PARA MAIUSCULO OU MINUSCULO COM TOUPPER E TOLOWER -------

    char palavra1[50] = {"Bom dia simpatia"};
    char palavra2[50] = {"BOM DIA SIMPATIA"};

    for(int i = 0; i < strlen(palavra1); i++){
        printf("%c", toupper(palavra1[i]));
    }

    printf("\n");
    
    for(int i = 0; i < strlen(palavra2); i++){
        printf("%c", tolower(palavra2[i]));
    }
    */

    
    /*//-------------------- DIVIDIR STRINGS EM TOKENS COM STRTOK ---------------------

    char palavra[50] = {"Bom!dia.simpatia bom dia"};
    char *pt;

    pt = strtok(palavra, "!. ");
    
    while(pt){
        printf("token: %s\n", pt);
        pt = strtok(NULL, "!. ");
    }
    */


    /*/--------------------------- MATRIZ DE STRINGS --------------------------

    char nomes[5][25];
    int l;
    
    for(l = 0; l < 5; l++){
        printf("Digite o nome da posição %d: ", l + 1);
        fgets(nomes[l], 25, stdin);
    }

    for(l = 0; l < 5; l++){
        printf("Nome na posição %d: %s", l + 1, nomes[l]);
    }
    */



    /*//------------------- DESCOBRIR SE UMA PALAVRA É PALINDROMA --------------------

    char palavra1[30];
    char palavra2[30];
    
    printf("Digite uma palavra: ");
    scanf("%s", palavra1);

    int j = 0;

    unsigned f = strlen(palavra1);
    
    for(int i = f - 1; i >= 0; i--){
        palavra2[j] = palavra1[i];
        j++;
    }
    
    int pl = strcmp(palavra1, palavra2);
    
    if (pl == 0){
        printf("É palindroma");
    }
    else{
        printf("Não é palindroma");
    }
    */


    
    //------------------------ DESCOBRIR SE UMA FRASE É PALINDROMA -------------------------

    char palavra[50], copia[50];
    int i, tam, j = 0, diferente = 0;

    printf("Digite uma frase: ");
    scanf("%50[^\n]", palavra);

    // -> Precisamos remover qualquer simbolo ou espaço da string.

    for(i = 0; i < strlen(palavra); i++){
        if(palavra[i] != '!' && palavra[i] != '?' 
        && palavra[i] != ' ' && palavra[i] != '.'){
            copia[j++] = palavra[i];
        }
        
    }

    copia[j] = '\0';

    printf("\nOriginal: %s\nCopia: %s\n", palavra, copia);
    
    tam = strlen(copia) - 1;
    for(i = 0; i < strlen(copia); i++){
        if(copia[i] != copia[tam--]){
            diferente++;
        }
    }

    if(diferente == 0){
        printf("\nÉ palindroma\n");
    }else{
        printf("\nNão é palindroma\n");
    }
    
  return 0;
}