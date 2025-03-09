/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 05:02:05 by ezahiri           #+#    #+#             */
/*   Updated: 2025/03/08 06:41:23 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
    protected :
        std::string name;
        std::string effects;
    public :
        ASpell (const std::string &name, const std::string &effects);
        const std::string &getName() const;
        const std::string &getEffects() const;
        virtual ASpell *clone () const = 0;
        void launch (const ATarget &tar) const;
        virtual ~ASpell(){};
 };

 #endif