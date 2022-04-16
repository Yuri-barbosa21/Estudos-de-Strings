#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

    
    //-------- PROCURANDO CARACTERES EM UMA STRING COM STRCHR E STRRCHR --------

    // Strchr -> Retorna a primeira ocorrência
    // Strrchr -> Retorna a segunda ocorrência
    
    char palavra[50] = {"abacate"};

   
    
        
  return 0;
}