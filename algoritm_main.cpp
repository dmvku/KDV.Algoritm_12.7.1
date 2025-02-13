/***************************************/
/*                                     */
/*            Task 12.7.1              */
/*                                     */
/***************************************/

#include "search_algoritm.h"

int main()
{
	std::cout << "The programm checks whether a string is a multiple of a number.\n";

	do
	{
		std::cout << "Enter the text to check:\n";
		std::string textString{};
		std::cin >> textString;

		int number{};
		do
		{
			std::cout << "Enter a number K (K > 0): ";
			std::cin >> number;
			if (number < 1)
			{
				std::cout << "The number K must be greater than zero...\n";
			}
		} while (number < 1);

		size_t numberK{ static_cast<size_t>(number) };

		std::string isMultiple = isKPeriodic(textString, numberK) ? "" : "n't";

		std::cout << "String is" << isMultiple << " a multiple of a number " << numberK << ".\n\n";

		std::cout << "Would you like to repeat it (y - yes, other key - no)? ";
		char repeatIt{};
		std::cin >> repeatIt;
		if (repeatIt != 'y' && repeatIt != 'Y')
		{
			break;
		}
	} while (true);
	
	return 0;
}