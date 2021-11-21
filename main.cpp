#include <iostream>

using namespace std;

float media(float, float);

float soma(float, float);

int main()
{
    float nota1 = 9.7;
    float nota2 = 8.5;
    float media = (nota1 + nota2)/2;
    float soma = nota1 + nota2;
    cout << "A media entre as notas é " << media;
    cout << "\nA soma entre as notas é " << soma;

    return 0;
}

float soma(int nota1, int nota2){
  return nota1 + nota2;
}

float media(float nota1, float nota2){
  return (nota1+nota2)/2;
}