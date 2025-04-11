# 🎸 Guitarra USB para Guitar Hero com Arduino Leonardo

Este projeto transforma um **Arduino Leonardo** em um controle estilo guitarra para jogos como **Guitar Hero** ou **Friday Night Funkin’**, utilizando botões físicos que simulam teclas do teclado (como `A`, `S`, `J`, `K`, `L`).

---

## 🛠️ Componentes Utilizados

- 1x Arduino Leonardo
- 5x Botões (push buttons)
- 5x Resistores (se preferir pull-down externo, mas usamos `INPUT_PULLUP`)
- Protoboard e fios
- Cabo USB

---

## 🎮 Funcionamento

Cada botão, quando pressionado, simula uma tecla do teclado:

| Botão | Tecla Simulada |
| ----- | -------------- |
| D2    | `A`            |
| D5    | `S`            |
| D6    | `J`            |
| D7    | `K`            |
| D8    | `L`            |

O sistema usa `Keyboard.press()` quando o botão está pressionado, e `Keyboard.release()` quando é solto.

Além disso, o monitor serial exibe mensagens de depuração indicando quais teclas estão sendo acionadas.

---

## 🖌️ Protótipo da Carcaça

No futuro, o projeto será aprimorado com a criação de uma **carcaça personalizada** em formato de guitarra, utilizando materiais como MDF, impressão 3D ou acrílico cortado a laser. A ideia é tornar a experiência mais imersiva e próxima de uma guitarra real.

Abaixo, um conceito visual de como a guitarra poderá ser:

## 🛠️Protótipo da Guitarra


---


