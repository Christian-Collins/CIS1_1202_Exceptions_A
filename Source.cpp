// Christian Collins
// CIS 1202 501
// April 24, 2024

#include <iostream>
#include <cctype>
using namespace std;

char character(char start, int offset);

int main()
{
	char test = 'd';
	int test1 = 5;
	try
	{
		char result = character(test, test1);
		cout << test << " + " << test1 << " = " << result << endl;
	}
	catch (string invalidCharacterException)
	{
		cout << invalidCharacterException;
	}
	catch (int invalidRangeException)
	{
		cout << "ERROR:converts letters to non-letter or to a different case.\n";
	}
	test = 'A';
	test1 = 32;
	try
	{
		char result = character(test, test1);
		cout << test << " + " << test1 << " = " << result << endl;
	}
	catch (string invalidCharacterException)
	{
		cout << invalidCharacterException;
	}
	catch (int invalidRangeException)
	{
		cout << "ERROR:converts letters to non-letter or to a different case.\n";
	}
	test = 'Z';
	test1 = -1;
	try
	{
		char result = character(test, test1);
		cout << test << " + " << test1 << " = " << result << endl;
	}
	catch (string invalidCharacterException)
	{
		cout << invalidCharacterException;
	}
	catch (int invalidRangeException)
	{
		cout << "ERROR:converts letters to non-letter or to a different case.\n";
	}
	test = 'a';
	test = -1;
	try
	{
		char result = character(test, test1);
		cout << test << " + " << test1 << " = " << result << endl;
	}
	catch (string invalidCharacterException)
	{
		cout << invalidCharacterException;
	}
	catch (int invalidRangeException)
	{
		cout << "ERROR:converts letters to non-letter or to a different case.\n";
	}
	cout << "\n\n";
	return(0);
}

char character(char start, int offset)
{
	int invalidRangeException = 0;
	if (!(isalpha(start)))
	{
		string invalidCharacterException = "ERROR:character is not a letter.\n";
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
