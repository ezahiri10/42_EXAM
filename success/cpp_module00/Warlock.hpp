/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 04:19:36 by ezahiri           #+#    #+#             */
/*   Updated: 2025/03/08 04:45:01 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>

class Warlock
{
    private :
      std::string name;
      std::string title;

    public :
       Warlock (const std::string &name, const std::string &title);
        const std::string &getName() const;
        const std::string &getTitle () const;

        void setTitle (const std::string &title);
        void introduce() const;
        ~Warlock ();
        
};

#endif