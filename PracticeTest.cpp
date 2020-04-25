/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_a_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("ba");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_not_alphabet_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("--");
    ASSERT_TRUE(actual);
}


TEST(PracticeTest, is_single_alphabet_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("t");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_empty_string_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome(" ");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_upper_lower_string_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Cc");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_string_with_space_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Cd Dc");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_number_with_word_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("12abba21"); 
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_order_incorrect)
{
	Practice obj;
	int a = 45;
	int b = 46;
	int c = 47;
	obj.sortDescending(a, b, c);
    ASSERT_LT(c, a);
	ASSERT_LT(b, a);
	ASSERT_LT(c, b);

}

TEST(PracticeTest, is_order_correct)
{
	Practice obj;
	int a = 99;
	int b = 98;
	int c = 96;
	obj.sortDescending(a, b, c);
    ASSERT_LT(c, a);
	ASSERT_LT(b, a);
	ASSERT_LT(c, b);

}