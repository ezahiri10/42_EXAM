/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 05:52:33 by ezahiri           #+#    #+#             */
/*   Updated: 2025/03/08 06:24:16 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh() :  ASpell("Fwoosh", "fwooshed")
{
}

ASpell *Fwoosh::clone () const
{
    return (new Fwoosh());
}
