#include <iostream>
using namespace std;

void Teste1(int);
void Teste2(int &);
int Teste3(int);

// 1 -

// a)
// variável global
int x = 20;
// as variáveis locais são as definidas dentro de funções, e seus escopos são as próprias funções onde são definidas. Por exemplo, a variável 'numero', que foi definida na main, tem como escopo a própria main.

// b)
// int main() -- Não recebe parâmetro; void Teste1() -- Passagem por valor; void Teste2() -- Passagem por referência; void Teste3() -- Passagem por valor.


int main(void) {
  int numero = 10, outroNumero;
  Teste1(numero);
  // Ao passar por 'Teste1()' a variável 'numero' não tem seu valor alterado dentro da main. A variável x, por outro lado, tem seu valor alterado para 21, pois é uma variável global.
  // Após a execução de 'Teste1()' a variável 'numero' que foi definida dentro da função 'Teste1()' deixa de ocupar espaço na memória.
  cout << "Valor de numero (após Teste1) = " << numero << endl;
  // Valor de numero (após Teste1) = 10
  cout << "X = " << x << endl;
  // X = 21
  Teste2(numero);
  // O valor da variável 'numero' é alterado para 110, pois seu endereço foi passado à função. O valor de 'x' agora é 22.
  // Após a execução de 'Teste2()' a variável 'valor' que foi definida dentro da função 'Teste2()' deixa de ocupar espaço na memória.
  cout << "Valor de numero (após Teste2) = " << numero << endl;
  // Valor de numero (após Teste2) = 110
  cout << "X = " << x << endl;
  // X = 22
  outroNumero = Teste3(numero);
  // A variável 'outroNumero' recebe o retorno da função, que neste caso é 310. A variável 'x' é decrementada, seu valor agora é 21.
  // Após a execução de 'Teste3()' as variaveis 'n' e 'valor' deixam de ocupar espaço na memória.
  cout << "Valor de outro numero (após Teste3) = " << outroNumero << endl;
  // Valor de outro numero (após Teste3) = 310
  cout << "X = " << x << endl;
  // X = 21
}
// Após encerrar a execução da main, as variaveis 'numero' e 'outroNumero' deixam de ocupar espaço na memória, pois foram definidas no escopo da main.

void Teste1(int numero) {
  numero = numero + x;
  x++;
}

void Teste2(int &numero) {
  int valor = 100;
  numero = numero + valor;
  x++;
}

int Teste3(int n) {
  int valor = 200;
  n = n + valor;
  x--;
  return n;
}

// A variável global 'x' somente deixa de ter seu espaço na memória quando o programa é fechado.
// cod em outro arquivo
