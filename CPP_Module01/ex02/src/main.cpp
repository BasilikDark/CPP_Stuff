/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 20:59:43 by rrupp             #+#    #+#             */
/*   Updated: 2023/06/04 10:19:37 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

/*the differance between a Pointer and a Reference seems to be that the Reference 
can't be assigned to another pointer and it already is derefferanced*/

int main(void)
{
    std::string ZombieSays = "HI THIS IS BRAIN";
    std::string *stringPtr = &ZombieSays;
    std::string &stringRef = ZombieSays;

    std::cout << &ZombieSays << std::endl;
    std::cout << stringPtr << std::endl;
    std::cout << &stringRef << std::endl;
    
    std::cout << ZombieSays << std::endl;
    std::cout << *stringPtr << std::endl;
    std::cout << stringRef << std::endl;

    // ZombieSays = "Blub";
    // std::cout << ZombieSays << std::endl;
    // std::cout << *stringPtr << std::endl;
    // std::cout << stringRef << std::endl;
    
    // std::string test = "test";
    // stringRef = test;
    // stringPtr = &test;
    // std::cout << ZombieSays << std::endl;
    // std::cout << *stringPtr << std::endl;
    // std::cout << stringRef << std::endl;
	// std::string	test2;
	// test2 = "that does not work!";
	// &stringRef = test2;
    return (0);
}