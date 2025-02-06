#include <stdio.h>
int main() {
    int codigo;
    char nome [40];
    int populacao;
    double area , PIB;

    printf("Digite o codigo da cidade: \n");
    scanf("%d" , &codigo);

    printf("digite o nome da sua cidade: \n");
    scanf("%s" , &nome);

    printf("Quantos habitantes: \n");
    scanf("%d" , &populacao);
    
    printf("digite a area da sua cidade: \n");
    scanf("%.2f m" , &area);

    printf("digite o PIB da sua cidade: \n");
    scanf("%f" , PIB);
    
    printf("nome: %s - Codigo: %d\n", nome, codigo);
    printf("populacao: %d\n", populacao);
    printf("area: %.2f m\n", area);
    printf("area: %.f\n", PIB);
    
}
