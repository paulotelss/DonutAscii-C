#include <stdio.h>
#include <math.h>
#include <unistd.h>  // Para usleep

int main() {
    float A = 0, B = 0;
    float i, j;
    int k;
    float z[1760];    // Buffer de profundidade para um tamanho padrão
    char b[1760];     // Buffer de caracteres para um tamanho padrão

    printf("\x1b[2J"); // Limpa a tela

    while(1) {
        memset(b, 32, 1760);  // Limpa o buffer de caracteres
        memset(z, 0, 7040);  // Limpa o buffer de profundidade

        for(j = 0; j < 6.28; j += 0.07) {
            for(i = 0; i < 6.28; i += 0.02) {
                float c = sin(i);
                float d = cos(j);
                float e = sin(A);
                float f = sin(j);
                float g = cos(A);
                float h = d + 2;
                float D = 1 / (c * h * e + f * g + 5);
                float l = cos(i);
                float m = cos(B);
                float n = sin(B);
                float t = c * h * g - f * e;

                int x = 40 + 30 * D * (l * h * m - t * n); // Ajusta o tamanho do donut
                int y = 12 + 15 * D * (l * h * n + t * m); // Ajusta o tamanho do donut
                int o = x + 80 * y;                       // Calcula o índice no buffer
                int N = 8 * ((f * e - c * d * g) * m - c * d * e - f * g - l * d * n);

                if(22 > y && y > 0 && x > 0 && 80 > x && D > z[o]) {
                    z[o] = D;
                    b[o] = ".,-~:;=!*#$@"[N > 0 ? N : 0];
                }
            }
        }

        printf("\x1b[H"); // Volta para o início da tela
        for(k = 0; k < 1760; k++) {
            putchar(k % 80 ? b[k] : 10); // Imprime o buffer com a largura correta
        }

        A += 0.04; // Incremento ajustado para a rotação
        B += 0.02;

        usleep(30000); // Tempo de espera entre frames
    }
    return 0;
}
