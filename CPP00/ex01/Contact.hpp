/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <kneves@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 21:47:53 by kneves            #+#    #+#             */
/*   Updated: 2024/07/13 01:53:26 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact
{
    private:
    std::string First_Name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

    public:
    Contact();
    ~Contact();
    void setFirstName(const std::string& FirstName);
    void setLastName(const std::string& last_name);
    void setNickname(const std::string& nickname);
    void setPhoneNumber(const std::string& phone_number);
    void setDarkestSecret(const std::string& darkest_secret);
    std::string getFirstName(void) const;
    std::string getLastName(void) const;
    std::string getNickname(void) const;
    std::string getPhoneNumber(void) const;
    std::string getDarkestSecret(void) const;
};

#endif // CONTACT_HPP