/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_Zombie.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 18:55:06 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/09 19:32:04 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MANAGE_ZOMBIE_HPP
# define MANAGE_ZOMBIE_HPP

#include "Zombie.hpp"

Zombie	*newZombie( std::string name );
void	randomChump( std::string name );


#endif