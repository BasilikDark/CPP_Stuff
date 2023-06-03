/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 20:59:43 by rrupp             #+#    #+#             */
/*   Updated: 2023/06/03 21:28:43 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

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
    return (0);
}