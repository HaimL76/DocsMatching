#pragma once
#include <string>

using namespace std;

struct MatchResult 
{
	int matchCount;
	int str1Begin;
	int str2Begin;
};

int Compare(const string& str1, const string& str2, int begin1, int begin2, MatchResult& result);

class LinesMatching
{
};

