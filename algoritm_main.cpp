/***************************************/
/*                                     */
/*            Task 12.7.1              */
/*                                     */
/***************************************/

#include "search_algoritm.h"

int main()
{
	std::cout << "The programm checks whether a string is a multiple of a number.\n";

	std::cout << "Enter the text for analysis:\n";
	std::string textString{};
	std::cin >> textString;	
	
	int numberK{};	
	
	do
	{
		std::cout << "Enter a number K (K > 0): ";
		std::cin >> numberK;
		if (numberK <= 0)
		{
			std::cout << "The number K must be greater than zero... ";
		}				
	} while (numberK <= 0);

	size_t number{ static_cast<size_t>(numberK) };

	std::string isMultiple = checkMultiplicity(textString, number) ? "" : "n't";

	std::cout << "String is" << isMultiple << " a multiple of a number " << numberK << "\n";
	return 0;
}