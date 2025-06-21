#include <assert.h>
#include <stdio.h>
#include "../src/functions.h"

int main() {
    double precios[] = {100.0, 108.0, 103.0, 112.0, 109.0};
    int n = sizeof(precios)/sizeof(precios[0]);
    double retornos[n-1];

    for (int i = 1; i < n; i++) {
        retornos[i-1] = calcularRetorno(precios[i], precios[i-1]);
    }

    double media = calcularMedia(retornos, n-1);
    double volatilidad = calcularVolatilidad(retornos, n-1);

    assert(media > 0);
    assert(volatilidad > 0);

    printf("✅ Test de integración exitoso. Media: %.6f, Volatilidad: %.6f\n", media, volatilidad);
    return 0;
}