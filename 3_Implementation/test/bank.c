#include "unity.h"
#include "header.h"

/* Modify these two lines according to the project */
#include "header.h"
#define PROJECT_NAME    "Bank-Management-system"

/* Prototypes for all the test functions */
void test_balance(void);
void test_deposit(void);
void test_withdraw(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_balance);
  RUN_TEST(test_withdraw);
  RUN_TEST(test_deposit);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_balance(void) {
  TEST_ASSERT_EQUAL(2000, balance(2000));
}

void test_withdraw(void) {
  TEST_ASSERT_EQUAL(500, withdraw(500,2000));
}

void test_deposit(void) {
  TEST_ASSERT_EQUAL(2000, deposit(500, 1500));
}
