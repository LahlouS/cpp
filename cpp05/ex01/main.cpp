#include <iostream>
#include <string>
#include "Form.hpp"
#include "bureaucrat.hpp"

void	programPause(void){
	char backSlashN = 0;
	std::cout << "Press enter to continue\n";
	std::cin.get(backSlashN);
}

int main()
{
    try
    {
        Bureaucrat  patoch("patoch", 50);
        Form        G12("G12", 200, 1);

        patoch.signForm(G12);
        std::cout << G12;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Bureaucrat  patoch("patoch", 50);
        Form        G12("G12", 60, 1);

        patoch.signForm(G12);
        std::cout << G12;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Bureaucrat  patoch("patoch", 50);
        Form        G12("G12", 60, 1);
        {
           Form        G13 = G12;
           std::cout << G13;
        }
        patoch.signForm(G12);
        std::cout << G12;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Bureaucrat  patoch("patoch", 60);
        Form        G12("G12", 151, 1);

        patoch.signForm(G12);
        std::cout << G12;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Bureaucrat  patoch("patoch", 60);
        Form        G12("G12", 15, 0);

        patoch.signForm(G12);
        std::cout << G12;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}
