#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>
#include <map>

class Karen {
	public:
		Karen(void);
		~Karen(void);
		void	complain(std::string level);
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		int		find_equivalent(std::string level);
};

#endif