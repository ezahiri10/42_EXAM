/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 05:36:19 by ezahiri           #+#    #+#             */
/*   Updated: 2025/03/08 06:28:34 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell (const std::string &name, const std::string &effects)
{
    this->name = name;
    this->effects = effects;
}

const std::string &ASpell::getName() const
{
    return (this->name);
}

const std::string &ASpell::getEffects() const
{
    return (this->effects);
}

void ASpell::launch (const ATarget &tar) const
{
    tar.getHitBySpell(*this);
}





