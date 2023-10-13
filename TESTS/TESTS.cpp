#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int*, int*);
extern "C" int getArea(int*, int*);

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


	};
}
