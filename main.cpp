#include <iostream>  // std::cout
#include <algorithm> // std::reverse
#include <vector>    // std::vector

using namespace std;

// struct de nós
struct node
{
    string token; // movimentos disponiveis (diagonal,insercao e delecao)
    int linha;    // linha em que o nó se encontra
    int coluna;   // coluna em que o nó se encontra
    int valor;    // score do nó
};

int main()
{
    // declarao e iniciação de variaveis
    int m;
    int n;
    string seqA;
    string seqB;

    // recebendo as sequencias A e B assim como seus tamanhos
    cin >> n;
    cin >> m;
    cin >> seqA;
    cin >> seqB;

    // print das sequencias A e B assim como seus respectivos tamanhos
    cout << "-------------------------------------" << endl;
    cout << "Tamanho de A (n) = " << n << endl;
    cout << "Sequencia A = " << seqA << endl;
    cout << "-------------------------------------" << endl;
    cout << "Tamanho de B (m) = " << m << endl;
    cout << "Sequencia B = " << seqB << endl;

    return 0;
}