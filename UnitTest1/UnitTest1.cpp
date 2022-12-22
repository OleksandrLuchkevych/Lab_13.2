#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_13.2/Lab_13.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a = 5;
			int b = 1;
			int result = MAX(a, b);
			int expectedNumber = 5;
			Assert::AreEqual(expectedNumber, result);

		}
	};
}
