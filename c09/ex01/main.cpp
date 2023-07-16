/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 17:04:57 by ilinhard          #+#    #+#             */
/*   Updated: 2023/07/16 18:33:06 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include <sstream>
#include <cstdlib>

void	verifyDigit(const std::string &value) {
	bool	hasDecimal = false;

	for (size_t i = 0; i < value.size(); i++) {

		if (std::isdigit(value[i])) {
			continue;
		} else if (value[i] == '.') {
			if (hasDecimal || i == value.size() - 1 || !std::isdigit(value[i + 1])) {
				throw std::runtime_error("Error : Must be an digit after a dot");
			}
			hasDecimal = true;
		} else {
			throw std::runtime_error("Error : Expression contains invalid character");
		}
	}
}

void	makeOperation(std::stack<double> &stack, const std::string &token) {
	if (stack.size() < 2) {
		throw std::runtime_error("Error : invalid expression");
	}
	double	operator1 = stack.top();
	stack.pop();
	double	operator2 = stack.top();
	stack.pop();

	if (token == "+") {
		stack.push(operator2 + operator1);
	} else if (token == "-") {
		stack.push(operator2 - operator1);
	} else if (token == "*") {
		stack.push(operator2 * operator1);
	} else if (token == "/") {
		if (operator2 == 0) {
			throw std::runtime_error("Error : can't divide by 0");
		}
		stack.push(operator2 / operator1);
	}
}

double	evaluateRPN(const std::string &expression) {
	std::istringstream	iss(expression);
	std::stack<double>	stack;
	std::string			token;

	while (iss >> token) {
		if (std::isdigit(token[0])) {
			verifyDigit(token);
			stack.push(std::atof(token.c_str()));
		} else if (token == "+" || token == "-" || token == "*" || token == "/" ) {
			makeOperation(stack, token);
		} else {
			throw std::runtime_error("Error : invalid operator");
		}

	}
	if (stack.size() != 1) {
		throw std::runtime_error("Error : invalid expression");
	}
	return (stack.top());
}

int	main(int ac, char **av) {
	if (ac != 2 || !av[1]) {
		std::cout << "Args must be : ./rpn [inverted Polish mathematical expression]"
				<< std::endl;
	}
	try {
		std::cout << evaluateRPN(av[1]) << std::endl;
	} catch(const std::exception& e) {
		std::cout << e.what() << '\n';
	}
	return (0);
}