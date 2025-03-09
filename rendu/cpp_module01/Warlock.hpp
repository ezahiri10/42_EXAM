/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 04:19:36 by ezahiri           #+#    #+#             */
/*   Updated: 2025/03/08 07:59:32 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include "ASpell.hpp"
#include "ATarget.hpp"
#include "Dummy.hpp"
#include <iostream>
#include <vector>
#include "Fwoosh.hpp"

class Warlock
{
    private :
      std::string name;
      std::string title;
      std::vector<ASpell *> spells;

    public :
       Warlock (const std::string &name, const std::string &title);
        const std::string &getName() const;
        const std::string &getTitle () const;

        void setTitle (const std::string &title);
        void introduce() const;

        void learnSpell (ASpell *ptr);
        void forgetSpell (std::string name);
         void launchSpell(const std::string &spellName, const ATarget &target);
        ~Warlock ();
};

#endif