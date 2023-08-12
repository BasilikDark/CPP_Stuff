/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 10:11:41 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/12 15:44:44 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

# define T_SIZE 4

class MateriaSource : public IMateriaSource
{
	public:
		/*Con- and Destructor's*/
		MateriaSource(void);
		MateriaSource(const MateriaSource &src);
		~MateriaSource(void);

		/*Operator Overload's*/
		MateriaSource	&operator = (const MateriaSource &rhs);

		/*Getter and Setter*/
		void			learnMateria(AMateria *materia);
		
		/*Memberfunctions*/
		AMateria		*createMateria(const std::string &type);

	private:
		AMateria	*_templates[T_SIZE];
};

#endif