﻿#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_9.2.2/Lab_9.2.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Student* stud = new Student[5];
			stud[0].prizv = "Арнест";
			stud[0].kyrs = 1;
			stud[0].specialst = Specialnists::computer_science;
			stud[0].math_grade = 1;
			stud[0].physics_grade = 4;
			stud[0].programing_grade = 3;

			stud[1].prizv = "Бартен";
			stud[1].kyrs = 2;
			stud[1].specialst = Specialnists::labor_education;
			stud[1].math_grade = 5;
			stud[1].physics_grade = 2;
			stud[1].pedagogic_grade = 3;

			stud[2].prizv = "Ромч";
			stud[2].kyrs = 1;
			stud[2].specialst = Specialnists::physics_and_informatics;
			stud[2].math_grade = 4;
			stud[2].physics_grade = 4;
			stud[2].pedagogic_grade = 3;

			stud[3].prizv = "Корсло";
			stud[3].kyrs = 1;
			stud[3].specialst = Specialnists::math_a_economics;
			stud[3].math_grade = 3;
			stud[3].physics_grade = 4;
			stud[3].pedagogic_grade = 3;

			stud[4].prizv = "Корсло";
			stud[4].kyrs = 1;
			stud[4].specialst = Specialnists::informatics;
			stud[4].math_grade = 2;
			stud[4].physics_grade = 4;
			stud[4].pedagogic_grade = 3;

			int* I = new int[5];

			I = IndexSort(stud, 5);

			Assert::AreEqual(stud[I[0]].math_grade, 1);
			Assert::AreEqual(stud[I[1]].math_grade, 2);
			Assert::AreEqual(stud[I[2]].math_grade, 3);
			Assert::AreEqual(stud[I[3]].math_grade, 4);
			Assert::AreEqual(stud[I[4]].math_grade, 5);
			//Кожен має свою оцінку і номкр оцінки з математики збігається з номером, який він має бути після сортування

		}
	};
}
