#include "stdafx.h"
#include "CppUnitTest.h"
#include "funcs.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(3, f1(1, 2));
			Assert::AreEqual(1, f1(1, -1));
		}

	};
}