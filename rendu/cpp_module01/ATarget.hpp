/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 05:11:49 by ezahiri           #+#    #+#             */
/*   Updated: 2025/03/08 06:19:38 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"
class ASpell;

class ATarget
{
    protected :
        std::string type;
    public :
        ATarget (const std::string &type);
        const std::string &getType() const;
        virtual ATarget *clone () const = 0;
        void getHitBySpell(const ASpell &s) const;
};

#endif