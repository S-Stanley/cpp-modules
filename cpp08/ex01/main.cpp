#include "Span.hpp"

int	main(void)
{
	try
	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		// sp.addNumber(42);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::out_of_range &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}

// int	main(void)
// {
// 	try
// 	{
// 		Span	sp(10000);

// 		sp.addALotOfNumbers(10000);

// 		// sp.addNumber(5);

// 		std::cout << sp.shortestSpan() << std::endl;
// 		std::cout << sp.longestSpan() << std::endl;
// 	}
// 	catch (std::out_of_range &e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
// 	return (0);
// }