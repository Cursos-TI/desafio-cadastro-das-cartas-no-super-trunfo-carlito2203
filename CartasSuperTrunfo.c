#include <stdio.h>
int main() {
    char NomedaCidade[50];
    int Populacao, Numerodepontosturisticos; 
    float Area, Pib;

   printf("Digite o Nome da Cidade: \n");
   scanf("%s", NomedaCidade);
   
    printf("Digite a População: \n");
    scanf("%d", &Populacao);

    printf("Digite o números de pontos turisticos: \n");
    scanf("%d", &Numerodepontosturisticos);

    printf("Digite a Área: \n");
    scanf("%f" &Area);

    printf("Digite o Pib \n");
    scanf("%f" &Pib);

    printf("Nome da Cidade é: %s\n", NomedaCidade);
    printf("População: %d\n", Populacao);
    printf("Pontos Turisticos: %d\n", Numerodepontosturisticos);
    printf("Área: %f\n", Area);
    printf("Pib: %f\n", Pib);









    return 0;
}
