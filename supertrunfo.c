#include <stdio.h>
#include <string.h>

// Estrutura que representa uma carta de país
struct Carta {
    char nome[40];
    long long populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade;
};

int main() {
    struct Carta pais1, pais2;
    int pontosPais1 = 0, pontosPais2 = 0;

    printf("=============================================\n");
    printf("        SUPER TRUNFO - CARTAS DE PAISES       \n");
    printf("=============================================\n\n");

    // Cadastro da primeira carta
    printf("=== Cadastro da 1ª carta ===\n");
    printf("Nome do país: ");
    scanf(" %[^\n]", pais1.nome);  // lê string com espaços

    printf("População: ");
    scanf("%lld", &pais1.populacao);

    printf("Área (em km²): ");
    scanf("%f", &pais1.area);

    printf("PIB (em bilhões de dólares): ");
    scanf("%f", &pais1.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pais1.pontosTuristicos);

    printf("Densidade demográfica (hab/km²): ");
    scanf("%f", &pais1.densidade);

    printf("\n=== Cadastro da 2ª carta ===\n");
    printf("Nome do país: ");
    scanf(" %[^\n]", pais2.nome);

    printf("População: ");
    scanf("%lld", &pais2.populacao);

    printf("Área (em km²): ");
    scanf("%f", &pais2.area);

    printf("PIB (em bilhões de dólares): ");
    scanf("%f", &pais2.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pais2.pontosTuristicos);

    printf("Densidade demográfica (hab/km²): ");
    scanf("%f", &pais2.densidade);

    printf("\n=============================================\n");
    printf("        COMPARANDO AS CARTAS CADASTRADAS      \n");
    printf("=============================================\n\n");

    // Comparação de cada atributo com regras específicas
    printf("1️⃣ População:\n");
    printf("%s: %lld | %s: %lld\n", pais1.nome, pais1.populacao, pais2.nome, pais2.populacao);
    if (pais1.populacao > pais2.populacao) {
        printf("-> %s vence!\n\n", pais1.nome);
        pontosPais1++;
    } else if (pais2.populacao > pais1.populacao) {
        printf("-> %s vence!\n\n", pais2.nome);
        pontosPais2++;
    } else {
        printf("-> Empate!\n\n");
    }

    printf("2️⃣ Área:\n");
    printf("%s: %.2f km² | %s: %.2f km²\n", pais1.nome, pais1.area, pais2.nome, pais2.area);
    if (pais1.area > pais2.area) {
        printf("-> %s vence!\n\n", pais1.nome);
        pontosPais1++;
    } else if (pais2.area > pais1.area) {
        printf("-> %s vence!\n\n", pais2.nome);
        pontosPais2++;
    } else {
        printf("-> Empate!\n\n");
    }

    printf("3️⃣ PIB:\n");
    printf("%s: %.2f | %s: %.2f (bilhões de dólares)\n", pais1.nome, pais1.pib, pais2.nome, pais2.pib);
    if (pais1.pib > pais2.pib) {
        printf("-> %s vence!\n\n", pais1.nome);
        pontosPais1++;
    } else if (pais2.pib > pais1.pib) {
        printf("-> %s vence!\n\n", pais2.nome);
        pontosPais2++;
    } else {
        printf("-> Empate!\n\n");
    }

    printf("4️⃣ Pontos Turísticos:\n");
    printf("%s: %d | %s: %d\n", pais1.nome, pais1.pontosTuristicos, pais2.nome, pais2.pontosTuristicos);
    if (pais1.pontosTuristicos > pais2.pontosTuristicos) {
        printf("-> %s vence!\n\n", pais1.nome);
        pontosPais1++;
    } else if (pais2.pontosTuristicos > pais1.pontosTuristicos) {
        printf("-> %s vence!\n\n", pais2.nome);
        pontosPais2++;
    } else {
        printf("-> Empate!\n\n");
    }

    printf("5️⃣ Densidade Demográfica (menor vence):\n");
    printf("%s: %.2f hab/km² | %s: %.2f hab/km²\n", pais1.nome, pais1.densidade, pais2.nome, pais2.densidade);
    if (pais1.densidade < pais2.densidade) {
        printf("-> %s vence!\n\n", pais1.nome);
        pontosPais1++;
    } else if (pais2.densidade < pais1.densidade) {
        printf("-> %s vence!\n\n", pais2.nome);
        pontosPais2++;
    } else {
        printf("-> Empate!\n\n");
    }

    printf("=============================================\n");
    printf("        RESULTADO FINAL - PLACAR GERAL        \n");
    printf("=============================================\n");
    printf("%s: %d pontos\n", pais1.nome, pontosPais1);
    printf("%s: %d pontos\n", pais2.nome, pontosPais2);
    printf("---------------------------------------------\n");

    if (pontosPais1 > pontosPais2) {
        printf("🏆 O grande vencedor é: %s!\n", pais1.nome);
    } else if (pontosPais2 > pontosPais1) {
        printf("🏆 O grande vencedor é: %s!\n", pais2.nome);
    } else {
        printf("🤝 Empate geral entre %s e %s!\n", pais1.nome, pais2.nome);
    }

    printf("=============================================\n");

    return 0;
}
