#include "pch.h"
#include "CppUnitTest.h"
#include "../pkr_laba_6.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61pkr
{
	TEST_CLASS(UnitTest61pkr)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Elem* tmp = new Elem;
			int info1 = 2;
			tmp->info = info1;
			Assert::AreEqual(tmp->info, 2);
		}
	};
}
