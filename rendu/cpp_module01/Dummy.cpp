/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 06:04:00 by ezahiri           #+#    #+#             */
/*   Updated: 2025/03/08 07:19:41 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"


Dummy::Dummy() : ATarget ("Target Practice Dummy")
{}

ATarget *Dummy::clone () const
{
    return (new Dummy());
}


Dummy::~Dummy()
{}