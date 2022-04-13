#include "pch.h"
#include "CppUnitTest.h"
#include "../oop_laba_2.5/Triad.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace oopUnitTest25
{
	TEST_CLASS(oopUnitTest25)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triad a;
			bool j = a.init(1, 2, 3);
			Assert::AreEqual(j, true);
		}
	};
}
