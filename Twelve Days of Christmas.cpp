#include <iostream>
#include <string>
using namespace std;

void main()
{
	int const numOfDays = 12;
	string days[numOfDays] = { "first", "second", "third", "fourth", "fifth", "sixth", "seventh", "eight", "night", "tenth", "eleventh", "twelfth" };

	for (int i = 0; i < 12; i++)
	{
		cout << "On the " << days[i] << " day of Christmas my true love gave to me " << endl;

		if (i < 12)
		{
			if (i >= 0)
			{
				if (i > 0)
				{
					if (i > 1)
					{
						if (i > 2)
						{
							if (i > 3)
							{
								if (i > 4)
								{
									if (i > 5)
									{
										if (i > 6)
										{
											if (i > 7)
											{
												if (i > 8)
												{
													if (i > 9)
													{
														if (i > 10)
														{
															cout << "twelve drummers drumming," << endl;
														}
														cout << "eleven pipers piping," << endl;
													}
													cout << "ten lords a leaping," << endl;
												}
												cout << "nine ladies dancing," << endl;
											}
											cout << "eight maids a milking," << endl;
										}
										cout << "seven swans a swimming," << endl;
									}
									cout << "six geese a laying," << endl;
								}
								cout << "five golden rings!" << endl;
							}
							cout << "four calling birds," << endl;
						}
						cout << "three french hens," << endl;
					}
					cout << "two turtle doves, and" << endl;
				}
				cout << "a partridge in a pear tree." << endl << endl << endl;
			}
		}
	} 
}