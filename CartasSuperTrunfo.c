#include <stdio.h>
#include <string.h>

struct Cidade {
    char estado;
    char codigo[4];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

void exibirCarta(struct Cidade cidade) {
    printf("\nCarta da Cidade:\n\n");
    printf("Estado: %c\nCódigo: %s\nNome: %s\n", cidade.estado, cidade.codigo, cidade.nome);
    printf("População: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\n", cidade.populacao, cidade.area, cidade.pib);
    printf("Pontos Turísticos: %d\n", cidade.pontosTuristicos);
}

int main() {
    struct Cidade cidade1;
    struct Cidade cidade2;

    // Dados da cidade 1 (São Paulo)
    cidade1.estado = 'S';
    strcpy(cidade1.codigo, "SP1");
    strcpy(cidade1.nome, "São Paulo");
    cidade1.populacao = 12325000;
    cidade1.area = 1521.11;
    cidade1.pib = 699.28;
    cidade1.pontosTuristicos = 50;

    // Dados da cidade 2 (Rio de Janeiro)
    cidade2.estado = 'R';
    strcpy(cidade2.codigo, "RJ1");
    strcpy(cidade2.nome, "Rio de Janeiro");
    cidade2.populacao = 6748000;
    cidade2.area = 1200.25;
    cidade2.pib = 300.50;
    cidade2.pontosTuristicos = 30;

    printf("Carta da Cidade 1:\n");
    exibirCarta(cidade1);

    printf("\nCarta da Cidade 2:\n");
    exibirCarta(cidade2);

    return 0;
}
