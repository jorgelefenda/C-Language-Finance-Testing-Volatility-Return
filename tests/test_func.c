#include <stdio.h>
#include <assert.h>
#include "../src/functions.h"

int main() {
    // Simulación funcional: usar main.c pero sin printf, sólo validar
    double precios[] = {100.0, 105.0, 102.0, 108.0, 107.0};
    int n = sizeof(precios)/sizeof(precios[0]);
    double retornos[n-1];

    for (int i = 1; i < n; i++) {
        retornos[i-1] = calcularRetorno(precios[i], precios[i-1]);
    }

    double media = calcularMedia(retornos, n-1);
    double volatilidad = calcularVolatilidad(retornos, n-1);

    if (media > 0 && volatilidad > 0) {
        printf("Test funcional OK\n");
        return 0;
    } else {
        printf("Test funcional FALLIDO\n");
        return 1;
    }
}