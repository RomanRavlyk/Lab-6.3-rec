#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 6.3  rec/Lab 6.3  rec.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int j[] = { 4, 6, 7, 6, 4, 2, 1, 2, 8, 9 };
			squareArray(j, 10, 0);
			int a[] = { 16, 36, 49, 36, 16, 4, 1, 4, 64, 81, };
			for (int i = 0; i < 10; i++) {
				Assert::AreEqual(j[i], a[i]);
			}
		}
	};
}
