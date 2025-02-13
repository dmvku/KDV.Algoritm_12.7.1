#include "search_algoritm.h"

bool isKPeriodic(const std::string& textString, size_t numberK)
{
	size_t stringLength{ textString.size() };

	if (stringLength < numberK || stringLength % numberK != 0 || )
	{
		return false;
	}

	std::string pattern = textString.substr(0, numberK);
	size_t nextBlock{ numberK };

	while (nextBlock < stringLength)
	{
		if (pattern != textString.substr(nextBlock, numberK))
		{
			return false;
		}

		nextBlock += numberK;
	}

	return true;
}
