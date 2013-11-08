#include "gtest\gtest.h"
#include "RomanNumbersAlicia\RomanNumbersAlicia.h"


	TEST(valueOfTheChar, shouldReturnsOneIfI)
	{
		EXPECT_EQ(1, valueOfTheChar('I'));
	}
	TEST(valueOfTheChar, shouldReturnsFiveIfV)
	{
		EXPECT_EQ(5, valueOfTheChar('V'));
	}
	
	TEST(valueOfTheChar, shouldReturnsTen)
	{
		EXPECT_EQ(10, valueOfTheChar('X'));
	}
	TEST(valueOfTheChar, shouldReturnsFifty)
	{
		EXPECT_EQ(50, valueOfTheChar('L'));
	}
	TEST(valueOfTheChar, shouldReturns100)
	{
		EXPECT_EQ(100, valueOfTheChar('C'));
	}
	TEST(valueOfTheChar, shouldReturns500)
	{
		EXPECT_EQ(500, valueOfTheChar('D'));
	}
	TEST(valueOfTheChar, shouldReturns1000)
	{
		EXPECT_EQ(1000, converts("M"));
	}
	TEST(valueOfTheChar, 0ifOtherValues)
	{
		EXPECT_EQ(-1, valueOfTheChar('x'));
	}

	TEST(converts, shouldreturns2ifII)
	{
		EXPECT_EQ(2, converts("II"));
	}

	TEST(converts, shouldReturns4ifIV)
	{
		EXPECT_EQ(4, converts("IV"));
	}