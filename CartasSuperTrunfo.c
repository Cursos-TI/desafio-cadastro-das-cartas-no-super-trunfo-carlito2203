#include <stdio.h>

int main() {
char NomedaCidade1[50], NomedaCidade2[50];
    int Populacao1, Populacao2, Pontosturisticos1, Pontosturisticos2; 
    float Area1, Area2, Pib1, Pib2;

   printf("Digite o Nome da primeira Cidade: \n");
   scanf(" %[^\n]s" ,NomedaCidade1);
   
    printf("Digite a População: \n");
    scanf("%d", &Populacao1);

    printf("Digite o números de pontos turisticos: \n");
    scanf("%d", &Pontosturisticos1);

    printf("Digite a Área: \n");
    scanf("%f", &Area1);

    printf("Digite o Pib:  \n");
    scanf("%f", &Pib1);

    printf("Digite o Nome da segunda Cidade: \n");
    scanf(" %[^\n]s" ,NomedaCidade2);

    printf("Digite a População: \n");
    scanf("%d", &Populacao2);

    printf("Digite o números de pontos turisticos: \n");
    scanf("%d", &Pontosturisticos2);

    printf("Digite a Área: \n");
    scanf("%f", &Area2);

    printf("Digite o Pib:  \n");
    scanf("%f", &Pib2);


    printf("\nDados da primeira carta:\n");
    printf("Nome da Cidade: %s\n", NomedaCidade1);
    printf("População: %d\n", Populacao1);
    printf("Pontos Turisticos: %d\n", Pontosturisticos1);
    printf("Area: %.2f\n", Area1);
    printf("Pib: %.2f\n", Pib1);

    printf("\nDados da segunda carta:\n");
    printf("Nome da Cidade: %s\n", NomedaCidade2);
    printf("População: %d\n", Populacao2);
    printf("Pontos Turisticos: %d\n", Pontosturisticos2);
    printf("Area: %.2f\n", Area2);
    printf("Pib: %.2f\n", Pib2); 

    return 0;
}
