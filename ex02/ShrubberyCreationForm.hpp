#ifndef SHRUBERRYCREATIONFORM_HPP

# define SHRUBERRYCREATIONFORM_HPP

# include "AForm.hpp"

class	ShruberryCreationForm : public AForm
{
	public:
						ShruberryCreationForm(void);
						~ShruberryCreationForm(void);

						ShruberryCreationForm(std::string name);
						ShruberryCreationForm(const ShruberryCreationForm& other);
		const ShruberryCreationForm&	operator=(const ShruberryCreationForm& other);

		void				exec(std::string target) const;
};

#endif