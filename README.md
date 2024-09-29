## ASCII Donut Renderer
Este projeto em C renderiza um donut rotativo no terminal usando caracteres ASCII. O donut é animado em tempo real e a rotação é suavizada para uma visualização contínua. O programa faz uso de cálculos trigonométricos para projetar a forma 3D do donut em uma tela 2D e utiliza buffers para profundidade e caracteres, a fim de gerenciar a renderização e a perspectiva corretamente.

**Como funciona?**

- `Projeção 3D`: O donut é desenhado usando funções trigonométricas (`sin`, `cos`) para calcular as posições dos pontos na superfície do donut em um espaço tridimensional.
- `Buffers`: Dois buffers são utilizados: um para armazenar a profundidade (`z`) e outro para os caracteres ASCII (`b`), garantindo que a perspectiva correta seja mantida durante a rotação.
- `Animação`: A rotação é controlada por incrementos variáveis de dois ângulos (`A` e `B`), que são atualizados a cada iteração do loop, resultando em uma animação contínua e suave.
- `Terminal`: A renderização é feita diretamente no terminal, com a tela sendo atualizada a cada quadro para criar o efeito de movimento.


![Captura de tela 2024-09-29 182815](https://github.com/user-attachments/assets/c9647f28-de1d-4c28-8e34-37ad75f30506)
![Captura de tela 2024-09-29 182828](https://github.com/user-attachments/assets/aac2db4e-c88c-4654-b321-866c41684b06)
