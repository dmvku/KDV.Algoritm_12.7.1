#include "search_algoritm.h"

bool checkMultiplicity(const std::string& textString, size_t numberK)
{
	size_t stringLength{ textString.size() };

	if (stringLength % numberK != 0 && stringLength < numberK)
	{
		return 0;
	}

	std::string pattern = textString.substr(0, numberK);
	int multiplicityK{ 1 };
	size_t nextBlock{ numberK };

	while (nextBlock < stringLength)
	{
		if (pattern != textString.substr(nextBlock, numberK))
		{
			return 0;
		}

		nextBlock += numberK;
		++multiplicityK;
	}

	return multiplicityK;
}