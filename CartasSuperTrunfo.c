#include <stdio.h>
int main() {
    int codigo;
    char nome [40];
    char Estado [40];
    int populacao;
    float area;
    float PIB;

    printf("Digite o codigo da cidade: \n");
    scanf("%d" , &codigo);

    printf("digite o nome da sua cidade: \n");
    scanf("%s" , &nome);

    printf("digite seu Estado: \n");
    scanf("%s" , &Estado);

    printf("Quantos habitantes: \n");
    scanf("%d" , &populacao);
    
    printf("digite a area da sua cidade: \n");
    scanf("%f" , &area);
     
    printf("Digite o PIB da sua cidade: \n");
    scanf("%f" , &PIB);

    printf("\n--- Informações da Cidade ---\n");
    printf("Nome: %s\n", nome);
    printf("Estado: %s\n", Estado);
    printf("Código: %d\n", codigo);
    printf("populacao: %d\n", populacao);
    printf("area: %.2f km²\n", area);
    printf("PIB: %.2f Bilhoes\n", PIB);

    
     return 0;

}
