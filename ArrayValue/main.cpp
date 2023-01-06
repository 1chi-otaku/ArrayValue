#include <iostream>
#include "ArrayDataException.h"
#include "ArraySizeException.h"

using namespace std;

class ArrayValueCalculator
{
public:
	template <typename T, int m, int n>
	int doCalc(T(&a)[m][n]);
};
template <typename T, int m, int n>
int ArrayValueCalculator::doCalc(T(&a)[m][n])
{
	if (m != 4 || n != 4) {
		throw new ArraySizeException();
	}

	int sum = 0;
	int check;
	int j = 0, i = 0, g;
	for (auto& row : a)
	{
		j++;
		for (auto& col : row)
		{
			i++;
			g = i / j;
			cout << col << ' ';
			check = atoi(col.c_str());
			char ch = static_cast<char>(check);
			sum += check;

			if (check == 0)
			{
				throw new ArrayDataException;
			}

		}
		cout << endl;
	}
	
	cout << "Summ" << sum << endl;
}

int main() {

	string array1[2][2] = { {"10","5"},
							{"5","2"} };
						  

	string array2[4][4] = { {"5","6","2","dsssdssdsds"},
						   {"2","112","32","14"},
						   {"1","3","6","12A"},
						   {"1","5","1","1"} };

	string array3[4][4] = { {"12","1","3","4"},
						   {"5","6","7","8"},
						   {"9","10","11","12"},
						   {"13","14","15","1"} };

	ArrayValueCalculator calculator;
	try
	{
		calculator.doCalc(array1);
		calculator.doCalc(array2);
		calculator.doCalc(array3);
		
	}
	catch (ArraySizeException* Exemption)
	{
		Exemption->GetExcpetion();
	}
	catch (ArrayDataException* Exemption)
	{
		Exemption->GetExcpetion();
	}



	


	return 0;
}