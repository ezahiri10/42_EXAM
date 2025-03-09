/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 04:31:37 by ezahiri           #+#    #+#             */
/*   Updated: 2025/03/08 08:03:20 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock (const std::string &name, const std::string &title)
{
    this->name = name;
    this->title = title;
    std::cout << this->name << ": This looks like another boring day." << std::endl;
}


Warlock::~Warlock()
{
    std::cout << this->name << ": My job here is done!" << std::endl;
    for (size_t i = 0; i < this->spells.size(); i++)
    {
            delete (this->spells[i]);
    }
}

void Warlock::introduce() const
{
    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!"<< std::endl;
}

const std::string &Warlock::getName() const
{
    return (this->name);
}

const std::string &Warlock::getTitle () const
{
    return (this->title);
}


void Warlock::setTitle (const std::string &title)
{
    this->title = title;
}


 void  Warlock::learnSpell (ASpell *ptr)
 {
    this->spells.push_back(ptr->clone());
 }
 
 void Warlock::forgetSpell (std::string name)
 {
    for (size_t i = 0; i < this->spells.size(); i++)
    {
        if (this->spells[i]->getName() == name)
        {
            delete (this->spells[i]);
            this->spells.erase(this->spells.begin() + i);
            break ;
        }
    }
 }

 void Warlock::launchSpell(const std::string &spellName, const ATarget &target)
 {
    for (size_t i = 0; i < this->spells.size(); i++)
    {
        if (this->spells[i]->getName() == spellName)
        {
            this->spells[i]->launch(target);
            break ;
        }
    }
 }