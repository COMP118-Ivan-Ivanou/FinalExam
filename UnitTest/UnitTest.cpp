#include "pch.h"
#include "CppUnitTest.h"
#include <cassert>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			srand(time(NULL));

			double matrix[4][3];

			for (int i = 0; i < 4; i++) {
				for (int y = 0; y < 3; y++) {
					int num = rand();
					matrix[i][y] = num;

					Assert:isTrue(i == 1.0, matrix[i][y]);
					Assert:isFalse(i == 3.0, matrix[i][y]);
					Assert:notEqual(i == 2.0, matrix[i][y]);
				}
			}
		}
	};
}
