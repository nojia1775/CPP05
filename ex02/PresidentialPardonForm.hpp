#ifndef PRESIDENTIALPARDONFORM_HPP

# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class	PresidentialPardonForm : public AForm
{
	private:
		const std::string	_target;
		
	public:
					PresidentialPardonForm(void);
					~PresidentialPardonForm(void);

					PresidentialPardonForm(const std::string target);
					PresidentialPardonForm(const PresidentialPardonForm& other);
		PresidentialPardonForm&	operator=(const PresidentialPardonForm& other);

		void			execute(const Bureaucrat& executor) const;
		std::string		getTarget(void) const;
};

#endif