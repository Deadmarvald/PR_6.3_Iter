#include "pch.h"
#include "CppUnitTest.h"
#include "../PR6.3Iter/Lab_06_3_Iter.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UT63Iter
{
	TEST_CLASS(UT63Iter)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			const int k = 3;
			int a[k] = { 3,1,2 };
			t = Perev1(a, k);
			Assert::AreEqual(t, 0);
		}
	};
}
