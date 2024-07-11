/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <kneves@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 10:42:16 by kneves            #+#    #+#             */
/*   Updated: 2024/07/11 16:45:11 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>

class PhoneBook
{
    public:
        PhoneBook();
        ~PhoneBook();
        void    addContact();
        void    searchContact();
    private:
        std::string command;
};

#endif