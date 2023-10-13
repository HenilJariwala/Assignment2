#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int*, int*);
extern "C" int getArea(int*, int*);
extern "C" int setLength(int, int*);
extern "C" int setWidth(int, int*);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TEST1
{
	TEST_CLASS(TEST1)
	{
	public:

		TEST_METHOD(PerimeterFunctionality)
		{
			int result = 0;
			int l = 1;
			int b = 1;
			result = getPerimeter(&l, &b);
			Assert::AreEqual(4, result);

		}

		TEST_METHOD(AreaFunctionality)
		{
			int result = 0;
			int l = 1;
			int b = 1;
			result = getArea(&l, &b);
			Assert::AreEqual(1, result);

		}

		TEST_METHOD(LengthFunctionality1)
		{
			//Testing the funtion to change the length value to 55 and check if it accept it
			int userinput = 55;
			int result = 0;
			setLength(userinput, &result);
			Assert::AreEqual(55, result);
		}

		TEST_METHOD(LengthFunctionality2)
		{
			//Testing the function to change the length value number greater than 100 and check if its working according to the limit given (It should not pass the test)
			int userinput = 100;
			int result = 0;
			setLength(userinput, &result);
			Assert::AreEqual(100, result);
		}
		TEST_METHOD(LengthFunctionality3)
		{
			//Testing the function to change the length value to -5 and check if its working according to the limit given (It should not pass the test)
			int userinput = -5;
			int result = 0;
			setLength(userinput, &result);
			Assert::AreEqual(-5, result);
		}

		TEST_METHOD(WidthFunctionality1)
		{
			//Testing the function to change the breadth value to 58
			int userinput = 58;
			int result = 0;
			setWidth(userinput, &result);
			Assert::AreEqual(58, result);
		}

		TEST_METHOD(WidthFunctionality2)
		{
			//Testing the function to change the breadth greater then 100  and check if its working according to the limit given (It should not pass the test)
			int userinput = 101;
			int result = 0;
			setWidth(userinput, &result);
			Assert::AreEqual(101, result);
		}

		TEST_METHOD(WidthFunctionality3)
		{
			//Testing the function to change the length value to -6 and check if its working according to the limit given (It should not pass the test)
			int userinput = -9;
			int result = 0;
			setWidth(userinput, &result);
			Assert::AreEqual(-6, result);
		}



	};
}
