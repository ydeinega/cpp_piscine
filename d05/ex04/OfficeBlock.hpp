/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 19:18:38 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/09 19:18:40 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_HPP
# define OFFICEBLOCK_HPP

class	OfficeBlock {

public:
	OfficeBlock();
	~OfficeBlock();
	OfficeBlock(OfficeBlock const &);//not possible
	OfficeBlock(Intern const &, Bureaucrat const &, Bureaucrat const &);

	OfficeBlock & operator=(OfficeBlock const &);//not possible
	void	setIntern(Intern const &);
	void	setSigner(Intern const &);
	void	setExecutor(Intern const &);

	void	doBureaucracy(std::string form_name, std::string target);

private:
	Intern _i;
	Bureaucrat _signer;
	Bureaucrat _executor;
};

#endif
