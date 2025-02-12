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
	
	std::cout << "Enter a number K: ";
	size_t numberK{};
	std::cin >> numberK;

	std::string isMultiple = checkMultiplicity(textString, numberK) ? "" : "not ";

	std::cout << "String is " << isMultiple << "a multiple of a number " << numberK << "\n";
	return 0;
}