/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 05:57:13 by ezahiri           #+#    #+#             */
/*   Updated: 2025/03/08 06:19:45 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget (const std::string &type)
{
    this->type = type;
}

const std::string &ATarget::getType() const
{
    return (this->type);   
}

 void ATarget::getHitBySpell(const ASpell &s) const
 {
    std::cout << this->type << " has been " << s.getEffects() << "!" << std::endl;
 }
 
 