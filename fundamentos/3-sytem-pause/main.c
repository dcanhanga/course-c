#include <stdio.h>

int main()
{
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