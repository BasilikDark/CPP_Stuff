/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 10:53:03 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/18 12:11:11 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int	main(void) {
	Intern	someRandomIntern;
	AForm	*rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	Bureaucrat 				blub("blub", 1);
	blub.signAForm(*rrf);
	blub.executeForm(*rrf);
	delete rrf;
}
