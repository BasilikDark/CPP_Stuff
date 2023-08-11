/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 10:11:41 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/11 17:45:46 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

# define T_SIZE 4

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &src);

		MateriaSource	&operator = (const MateriaSource &rhs);

		void			learnMateria(AMateria *materia);
		AMateria		*createMateria(const std::string &type);

		~MateriaSource(void);
	private:
		AMateria	*_templates[T_SIZE];
};

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < T_SIZE; i++)
		_templates[i] = NULL;
	std::cout << "MateriaSource Constructor called!" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	std::cout << "MateriaSource Copy Constructor called!" << std::endl;
	*this = src;
}

MateriaSource	&MateriaSource::operator = (const MateriaSource &rhs)
{
	std::cout << "MateriaSource Copy operator called!" << std::endl;
	for (int i = 0; i < T_SIZE; i++)
		_templates[i] = rhs._templates[i];
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	int i;

	i = 0;
	while (i < T_SIZE && _templates[i])
		i++;
	if (i < T_SIZE)
		_templates[i] = materia;
}

AMateria	*MateriaSource::createMateria(const std::string &type)
{
	std::cout << "createMateria function called!" << std::endl;
	for (int i = 0; i < T_SIZE; i++)
		if (_templates[i] && _templates[i]->getType() == type)
			return (_templates[i]->clone());
	return (NULL);
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource Deconstructor called!" << std::endl;
}

#endif