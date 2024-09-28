```c
#include <stdio.h>

int main() {
    printf("Don't use system pause\n");
    /*
    Não use system("pause"), pois é um recurso específico do Windows.
    Não funciona em sistemas Unix, como Linux e macOS.
    */
    printf("Use function default of C\n");
    printf("Pressione enter para finalizar\n");

    // Espera o usuário pressionar uma tecla
    getchar();

    return 0;
}
```

### Resumo:

1. **Função `printf`:**
   - O programa utiliza a função `printf` para exibir mensagens no console. Ele explica que não se deve usar `system("pause")`, que é específico do Windows e não funciona em sistemas Unix (como Linux e macOS).

2. **Função `getchar`:**
   - Em vez de usar `system("pause")`, que depende do sistema operacional, o código usa a função `getchar()`. Esta função espera que o usuário pressione enter, pausando a execução do programa até que isso aconteça. Isso garante que o código funcione tanto em sistemas Windows quanto Unix.

### Por que evitar `system("pause")`?
- **Portabilidade:** `system("pause")` é exclusivo do Windows, o que faz com que seu código não funcione corretamente em outros sistemas operacionais, como Linux ou macOS.
- **Segurança:** Usar `system("pause")` também pode ser arriscado, pois depende de uma chamada ao sistema operacional e pode abrir brechas de segurança em algumas situações.

### Alternativa com `getchar()`:
Usar `getchar()` é uma solução mais segura e portável, pois faz parte da biblioteca padrão do C (`stdio.h`) e funciona em qualquer sistema operacional. Assim, é preferível utilizar essa abordagem para pausar a execução do programa de maneira correta e universal.

