﻿#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.0/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest0
{
	TEST_CLASS(UnitTest0)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = sum(2, 3);
			Assert::AreEqual(t, 5);
		}
	};
}
