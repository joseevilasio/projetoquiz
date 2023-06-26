#
#include <iostream>

int main() {
    int opcao;

    std::cout << "Bem-vindo(a) ao programa de sele��o de temas!" << std::endl;
    std::cout << "Escolha um tema:" << std::endl;
    std::cout << "1. Tema Geografia e Cultura " << std::endl;
    std::cout << "2. Tema Fisica e Matem�tica" << std::endl;
    std::cout << "3. Tema Qu�mica e Biologia" << std::endl;

    std::cout << "Digite o n�mero da op��o desejada: ";
    std::cin >> opcao;

    switch (opcao) {
        case 1:
            // L�gica para definir o tema claro
            std::cout << "Tema claro selecionado." << std::endl;
            break;
        case 2:
            // L�gica para definir o tema escuro
            std::cout << "Tema escuro selecionado." << std::endl;
            break;
        case 3:
            // L�gica para definir o tema colorido
            std::cout << "Tema colorido selecionado." << std::endl;
            break;
        default:
            std::cout << "Op��o inv�lida. Tente novamente." << std::endl;
            return 0;
    }

    std::cout << std::endl;
    std::cout << "Agora vamos responder algumas perguntas:" << std::endl;

    int resposta1, resposta2, resposta3;

    std::cout << "1. " << std::endl;
    std::cout << "a) " << std::endl;
    std::cout << "b) " << std::endl;
    std::cout << "c) " << std::endl;
    std::cout << "d) " << std::endl;
    std::cout << "Digite a letra correspondente � resposta: ";
    std::cin >> resposta1;

    std::cout << std::endl;

    std::cout << "2. Qual � a capital da Fran�a?" << std::endl;
    std::cout << "a) Paris" << std::endl;
    std::cout << "b) Londres" << std::endl;
    std::cout << "c) Roma" << std::endl;
    std::cout << "d) Berlim" << std::endl;
    std::cout << "Digite a letra correspondente � resposta: ";
    std::cin >> resposta2;

    std::cout << std::endl;

    std::cout << "3. Qual � a f�rmula da energia cin�tica?" << std::endl;
    std::cout << "a) E = mc�" << std::endl;
    std::cout << "b) E = mgh" << std::endl;
    std::cout << "c) E = 1/2mv�" << std::endl;
    std::cout << "d) E = Fd" << std::endl;
    std::cout << "Digite a letra correspondente � resposta: ";
    std::cin >> resposta3;

    std::cout << std::endl;

    // L�gica para verificar as respostas e exibir o resultado
    int pontos = 0;

    if (resposta1 == 2) {
        pontos++;
    }
    return 0;}

