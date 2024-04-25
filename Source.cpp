// Christian Collins
// CIS 1202 501
// April 24, 2024

#include <iostream>
#include <cctype>
using namespace std;

char character(char start, int offset);

int main()
{

}

char character(char start, int offset)
{
	string invalidRangeException;
	if (!(isalpha(start)))
	{
		string invalidCharacterException = "";
		throw invalidCharacterException;
	}
	else if (offset > 25 || offset < -25)
	{
		throw invalidRangeException;
	}
	else if (isupper(start))
	{
		start += offset;
		if (isalpha(start))
		{
			if (islower(start))
			{
				throw invalidRangeException;
			}
			else
			{
				return(start);
			}
		}
		else
		{
			throw invalidRangeException;
		}
	}
	else if (islower(start))
	{
		{
			start += offset;
			if (isalpha(start))
			{
				if (isupper(start))
				{
					throw invalidRangeException;
				}
				else
				{
					return(start);
				}
			}
			else
			{
				throw invalidRangeException;
			}
		}
	}
}
