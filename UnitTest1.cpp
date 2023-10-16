#include "pch.h"
#include "CppUnitTest.h"
#include "../PR-5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double res;
			res = k(7,7 );
			Assert::AreEqual(res, -0.000357983);
		}
	};
}
