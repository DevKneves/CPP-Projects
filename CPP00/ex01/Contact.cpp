/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <kneves@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 21:47:48 by kneves            #+#    #+#             */
/*   Updated: 2024/07/13 01:53:34 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact(){
    this->First_Name = "";
    this->last_name = "";
    this->nickname = "";
    this->phone_number = "";
    this->darkest_secret = "";
}
Contact::~Contact(){}

void Contact::setFirstName(const std::string& First_Name)
{
    this->First_Name = First_Name;
}

void Contact::setLastName(const std::string& last_name)
{
    this->last_name = last_name;
}

void Contact::setNickname(const std::string& nickname)
{
    this->nickname = nickname;
}

void Contact::setPhoneNumber(const std::string& phone_number)
{
    this->phone_number = phone_number;
}

void Contact::setDarkestSecret(const std::string& darkest_secret)
{
    this->darkest_secret = darkest_secret;
}

std::string Contact::getFirstName(void) const
{
    return (this->First_Name);
}

std::string Contact::getLastName(void) const
{
    return (this->last_name);
}

std::string Contact::getNickname(void) const
{
    return (this->nickname);
}

std::string Contact::getPhoneNumber(void) const
{
    return (this->phone_number);
}

std::string Contact::getDarkestSecret(void) const
{
    return (this->darkest_secret);
}