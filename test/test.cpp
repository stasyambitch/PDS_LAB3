#include "pch.h"
#include <CppUnitTest.h>
#include "../lab3_2/Source1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace MyTestProject
{
    TEST_CLASS(MyTestClass)
    {
    public:

        TEST_METHOD(TestStirlingNumbers)
        {
            int F[20][20] = { 0 };

            stirlingNumbers(1, F);
            Assert::AreEqual(1, F[1][1]);

            stirlingNumbers(2, F);
            Assert::AreEqual(1, F[2][1]);
            Assert::AreEqual(1, F[2][2]);

            stirlingNumbers(3, F);
            Assert::AreEqual(1, F[3][1]);
            Assert::AreEqual(3, F[3][2]);
            Assert::AreEqual(1, F[3][3]);
        }

        TEST_METHOD(TestBellNumbers)
        {
            int F[20][20] = { 0 };
            int B[20] = { 0 };

            stirlingNumbers(5, F);
            bellNumbers(5, F, B);

            Assert::AreEqual(52, B[5]);
        }
    };
}
