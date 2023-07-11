#include <stdio.h>

int main() {
    int anio, dia, mes, a, y, m, d;

    printf("Ingrese el año: ");
    scanf("%d", &anio);

    for (mes = 1; mes <= 12; mes += 3) {
        a = (14 - mes) / 12;
        y = anio - a;
        m = mes + 12 * a - 2;
        dia = (1 + y + y / 4 - y / 100 + y / 400 + 31 * m / 12) % 7;

        // Buscar el primer lunes
        if (dia != 1) {
            dia = 8 - dia;
        }

        printf("Reunión del primer lunes del trimestre %d/%d/%d\n", dia, mes, anio);
    }

}
