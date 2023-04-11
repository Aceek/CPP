/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 23:50:07 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/11 03:08:56 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	replaceFile(std::ifstream &fileIn, std::ofstream &fileOut, char **av) {
	std::size_t	pos;
	std::string	file;
	std::string	tmp;

	pos = 0;
	while (std::getline(fileIn, tmp)) {
		file += tmp + '\n';
	}
	while ((pos = file.find(av[2], pos)) != std::string::npos) {
		fileOut << file.substr(0, pos) << av[3];
		pos += std::string(av[2]).size();
		file = file.substr(pos);
		pos = 0;
	}
	fileOut << file;
}

int	main(int ac, char **av) {
	std::ifstream	fileIn;
	std::ofstream	fileOut;
	std::string		tmp;

	if (ac != 4) {
		std::cout << "Error args numbers" << std::endl;
		return (1);
	}
	fileIn.open(av[1]);
	if (!fileIn.is_open()) {
		std::cout << "impossible d'ouvir le fichier : " << av[1] << std::endl;
		return (1);
	}
	fileOut.open((std::string(av[1]) + ".replace").c_str());
	if (!fileOut.is_open()) {
		std::cout << "impossible d'ouvir le fichier outfile.txt" << std::endl;
		return (1);
	}
	replaceFile(fileIn, fileOut, av);
	fileIn.close();
	fileOut.close();
}
