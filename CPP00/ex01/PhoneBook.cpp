/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <kneves@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 10:01:33 by kneves            #+#    #+#             */
/*   Updated: 2024/07/11 17:02:25 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
    // Inicialize aqui, se necessário
}

PhoneBook::~PhoneBook(void) {
    // Limpeza, se necessário
}

void PhoneBook::addContact()
{
    std::cout << "adicionando contato" << std::endl;
}

void PhoneBook::searchContact()
{
   std::cout << "buscando contato" << std::endl;
}

int main(int argc, char **argv)
{
    PhoneBook MyPhoneBook;
    std::string command;
    while (true)
    {
        std::cout << std::endl;
        std::cout << "Enter a command" << std::endl;
        std::cout << "command : ";
        std::getline(std::cin, command);
        if (command == "ADD")
            MyPhoneBook.addContact();
        else if (command == "SEARCH")
            MyPhoneBook.searchContact();
        else if (command == "EXIT")
            break;
        else
            std::cout << "bad argument" << std::endl;
    }
}
