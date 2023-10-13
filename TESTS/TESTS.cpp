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

		TEST_METHOD(LenghtFunctionality2)
		{
			//Testing the funtion to change the lenght value to 15 and check if it accept it
			int userinput = 15;
			int result = 0;
			setLength(userinput, &result);
			Assert::AreEqual(15, result);
		}

		TEST_METHOD(LenghtFunctionality3)
		{
			//Testing the funtion to change the lenght value to 1 and check if it accept it
			int userinput = 1;
			int result = 0;
			setLength(userinput, &result);
			Assert::AreEqual(1, result);
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
			//Testing the funtcion to change the width value to 1 and check if it accept it
			int userinput = 1;
			int result = 0;
			setWidth(userinput, &result);
			Assert::AreEqual(1, result);
		}


		TEST_METHOD(WidthFunctionality3)
		{
			//Testing the function to change the width value to 39 and check if it accept it
			int userinput = 39;
			int result = 0;
			setWidth(userinput, &result);
			Assert::AreEqual(39, result);
		}

	};
}
