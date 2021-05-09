#pragma once
#include <string>

using namespace std;

struct MatchResult 
{
	int matchCount;
	int str1Begin;
	int str2Begin;

	MatchResult() : 
		matchCount(0),
		str1Begin(0),
		str2Begin(0)
	{

	}
};

int Compare(const string& str1, const string& str2, int begin1, int begin2, MatchResult& result);

class LinesMatching
{
public:
	int Match(const string& str1, const string& str2, MatchResult& result)
	{
		return Compare(str1, str2, 0, 0, result);
	}
};

