#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\vladt\source\repos\13\13.1\sum.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int x = 1, n = 0;
			int t;
			t = (x - 1) / x;
			Assert::AreEqual(t, 0);

		}
	};
}
