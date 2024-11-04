#include <iostream>

class	Bureaucrat
{
	private:
		const std::string	_name;
		unsigned int		_grade;

	public:
					Bureaucrat(void);
					~Bureaucrat(void);

					Bureaucrat(const std::string name, unsigned int grade);
					Bureaucrat(const Bureaucrat& other);
		Bureaucrat&		operator=(const Bureaucrat& other);

		void			getName(void) const;
		void			getGrade(void) const;
		void			promote(void);
		void			depromote(void);

		class			GradeTooHighException : std::exception
		{
					public:
						const char	*what() const throw()
						{
							return "Grade too high";
						}
		};
		class			GradeTooLowException : std::exception
		{
					public:
						const char	*what() const throw()
						{
							return "Grade too low";
						}
		};
};

std::ostream&	operator<<(std::ostream& o, const Bureaucrat& bureaucrat);