#ifndef ROBOTOMYREQUESTFORM_HPP

# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <ctime>
# include <cstdlib>

class	RobotomyRequestForm : public AForm
{
	private:
		const std::string	_target;

	public:
					RobotomyRequestForm(void);
					~RobotomyRequestForm(void);

					RobotomyRequestForm(const std::string target);
					RobotomyRequestForm(const RobotomyRequestForm& other);
	RobotomyRequestForm&		operator=(const RobotomyRequestForm& other);

	void				execute(const Bureaucrat& executor) const;
	std::string			getTarget(void) const;
};

#endif