/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 23:42:15 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/08 23:42:17 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"
# include <cstdlib>

class	RobotomyRequestForm : public Form {

public:
	RobotomyRequestForm();
	~RobotomyRequestForm();
	RobotomyRequestForm(std::string);
	RobotomyRequestForm(RobotomyRequestForm const &);

	RobotomyRequestForm & operator=(RobotomyRequestForm const & src);
	std::string const getTarget() const;

private:
	void	make_execute() const;

	std::string _target;
};



#endif
