```c
#include <stdio.h>

int main() {
    int intNumber = 0;

    printf("Digite um número inteiro\n");
    // Captura o valor inteiro digitado pelo usuário
    scanf("%d", &intNumber);

    // Exibe o número inserido
    printf("O número inserido é %d", intNumber);

    return 0;
}
```

1. **`int intNumber = 0;`**:
   - Aqui, é declarada uma variável inteira chamada `intNumber` e inicializada com o valor 0.

2. **`printf("Digite um número inteiro\n");`**:
   - A função `printf` exibe a mensagem no console pedindo ao usuário para digitar um número inteiro.

3. **`scanf("%d", &intNumber);`**:
   - O `scanf` é usado para capturar a entrada do usuário. Neste caso, o `%d` indica que será lido um número inteiro.
   - O `&intNumber` passa o **endereço** da variável `intNumber` para o `scanf`, permitindo que a função armazene o valor digitado pelo usuário diretamente nessa variável.
   - É crucial passar o endereço da variável (com o operador `&`), pois o `scanf` precisa saber onde armazenar a entrada.

4. **`printf("O número inserido é %d", intNumber);`**:
   - Após o valor ser capturado e armazenado na variável `intNumber`, ele é exibido com `printf`, usando `%d` para imprimir o número inteiro.

### Resumo sobre `scanf`:

- **`scanf`** é uma função usada para capturar diferentes tipos de dados do usuário, como inteiros, caracteres, e strings.
- Ao utilizar `scanf`, é importante usar o **especificador de formato correto** (como `%d` para inteiros, `%f` para números com ponto flutuante, `%s` para strings).
- A função requer que seja passado o **endereço da variável** (usando `&` para variáveis escalares como inteiros), para que a entrada possa ser armazenada corretamente.

Em resumo, **`scanf`** é fundamental para interações com o usuário, permitindo que valores sejam fornecidos pelo teclado e processados no programa.