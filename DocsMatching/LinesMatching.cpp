#include "LinesMatching.h"

int Compare(const string& str1, const string& str2, int begin1, int begin2, MatchResult& result)
{
	const int& len1 = str1.length();
	const int& len2 = str2.length();

	if (begin1 < len1 && begin2 < len2)
	{
		const int& end1 = begin1 + result.matchCount;
		const int& end2 = begin2 + result.matchCount;

		if (end1 < len1 && end2 < len2)
		{
			const char* chars1 = str1.c_str();
			const char* chars2 = str2.c_str();

			int b1 = begin1;
			int b2 = begin2;

			if (chars1[end1] == chars2[end2])
			{
				int counter = 0;

				while (b1 < len1 && b2 < len2 && chars1[b1++] == chars2[b2++])
					counter++;

				if (counter > result.matchCount)
					result.matchCount = counter;
			}
		}
	}

	begin1++;

	if (begin1 >= len1)
	{
		begin2++;

		begin1 = 0;
	}

	if (begin2 >= len2)
		return result.matchCount;

 	return Compare(str1, str2, begin1, begin2, result);
}
