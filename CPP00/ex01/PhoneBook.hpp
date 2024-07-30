/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <kneves@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 10:42:16 by kneves            #+#    #+#             */
/*   Updated: 2024/07/13 01:50:33 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "Contact.hpp"
# include <iostream>

class PhoneBook
{
    public:
        PhoneBook();
        ~PhoneBook();
        void    addContact();
        void    searchContact();
    private:
        Contact Contacts[8];
        std::string command;
};

#endif