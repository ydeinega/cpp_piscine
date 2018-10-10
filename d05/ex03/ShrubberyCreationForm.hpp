/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 23:41:52 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/08 23:41:53 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHUBBERYCREATIONFORM_HPP
# define SHUBBERYCREATIONFORM_HPP
# include "Form.hpp"
# include <fstream>

class	ShrubberyCreationForm : public Form {

public:
	ShrubberyCreationForm();
	~ShrubberyCreationForm();
	ShrubberyCreationForm(std::string);
	ShrubberyCreationForm(ShrubberyCreationForm const &);

	ShrubberyCreationForm & operator=(ShrubberyCreationForm const & src);
	std::string const getTarget() const;

private:
	void	make_execute() const;

	std::string _target;
};

#endif

