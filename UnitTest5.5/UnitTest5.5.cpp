#include "pch.h"
#include "CppUnitTest.h"
#include "../Project5.5/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest55
{
	TEST_CLASS(UnitTest55)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int n = 0;
			int recursionDepth = 0;

			countOnes(n, recursionDepth);
			Assert::AreEqual(n, 0);

		}
	};
}
