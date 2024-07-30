/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <kneves@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 10:01:33 by kneves            #+#    #+#             */
/*   Updated: 2024/07/17 19:11:25 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() {}
PhoneBook::~PhoneBook() {}

void    PhoneBook::searchContact()
{
    int i = 0;
    std::string index;
    std::cout << "     index|first name| last name|  nickname" << std::endl;
    while (i < 8)
    {
        std::cout << "         " << i << "|";
        std::cout << Contacts[i].getFirstName() << "|";
        std::cout << Contacts[i].getLastName() << "|";
        std::cout << Contacts[i].getNickname() << std::endl;
        i++;
    }
    std::cout << "Enter index: ";   
    std::getline(std::cin, index);
    i = std::stoi(index);
    std::cout << "First name: " << Contacts[i].getFirstName() << std::endl;
    std::cout << "Last name: " << Contacts[i].getLastName() << std::endl;
    std::cout << "Nickname: " << Contacts[i].getNickname() << std::endl;
    std::cout << "Phone number: " << Contacts[i].getPhoneNumber() << std::endl;
    std::cout << "Darkest secret: " << Contacts[i].getDarkestSecret() << std::endl;

}

void PhoneBook::addContact()
{
    Contact MyContact;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
    int i = 0;
    
    std::cout << "Enter first name: ";
    std::getline(std::cin, first_name);
    MyContact.setFirstName(first_name);
    std::cout << "Enter last name: ";
    std::getline(std::cin, last_name);
    MyContact.setLastName(last_name);
    std::cout << "Enter nickname: ";
    std::getline(std::cin, nickname);
    MyContact.setNickname(nickname);
    std::cout << "Enter phone number: ";
    std::getline(std::cin, phone_number);
    MyContact.setPhoneNumber(phone_number);
    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, darkest_secret);
    MyContact.setDarkestSecret(darkest_secret);
    Contacts[i] = MyContact;
}

int main()
{
    Contact MyContact;
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
