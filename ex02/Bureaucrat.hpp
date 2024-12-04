#ifndef BUREAUCRAT_HPP

# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class	Form;

class	Bureaucrat
{
	private:
		const std::string	_name;
		int			_grade;

	public:
					Bureaucrat(void);
					~Bureaucrat(void);

					Bureaucrat(const std::string name, int grade);
					Bureaucrat(const Bureaucrat& other);
		Bureaucrat&		operator=(const Bureaucrat& other);

		std::string		getName(void) const;
		int			getGrade(void) const;
		void			promote(void);
		void			depromote(void);
		void			signForm(Form& form);

		class			GradeTooHighException : public std::exception
		{
					public:
						const char	*what() const throw();
		};
		class			GradeTooLowException : public std::exception
		{
					public:
						const char	*what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& o, const Bureaucrat& bureaucrat);

#endif