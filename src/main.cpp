#include <iostream>
#include <random>
#include "../include/vident.hh"

auto runApp() -> void
{
    Vident vident(1, 100);
    int vident_number = vident.getVidentNumber();
    int number_input;
    int lifes{5};

    auto show_win = [](int vident_number)
    {
        std::cout << "********************************" << '\n';
        std::cout << "          YOU WIN!!!" << '\n';
        std::cout << vident_number << " é o número que pensei!" << '\n';
        std::cout << "********************************" << '\n';
    };

    auto show_loser = [](int vident_number)
    {
        std::cout << "********************************" << '\n';
        std::cout << "          GAME OVER" << '\n';
        std::cout << "         VALOR ERA " << vident_number << '\n';
        std::cout << "********************************" << '\n';
    };

    while (lifes >= 0)
    {
        std::cout << "Olá! Estou pensando em um número de 1 am 100!" << '\n';
        std::cout << "Duvido vc advinhar! tente:" << '\n';
        std::cin >> number_input;

        if (number_input < vident_number)
        {
            std::cout << number_input << " é menor que o número que pensei..." << '\n';
        }

        if (vident_number < number_input)
        {
            std::cout << number_input << " é maior que o número que pensei..." << '\n';
        }

        if (vident_number == number_input)
        {
            show_win(vident_number);
            break;
        }

        std::cout << "Restam " << lifes << " tentativas." << '\n';

        if (lifes == 0)
        {
            show_loser(vident_number);
        }

        lifes--;
    }
}

auto main(int argc, char **argv) -> int
{
    runApp();
    return 0;
}
