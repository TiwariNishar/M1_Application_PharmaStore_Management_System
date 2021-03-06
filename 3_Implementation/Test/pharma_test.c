/**
 * @file pharma_test.c
 * @author Nishar Tiwari (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 10-11-2021
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "unity.h"
#include "pharma_operations.h"

#define PROJECT_NAME "pharma"

/* Prototypes for all the test functions */
void test_add_medicine(void);
void test_delete_medicine(void);
void test_modify_medicine(void);
void test_search_medicine(void);
void test_display_medicine(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add_medicine);
  RUN_TEST(test_delete_medicine);
  RUN_TEST(test_modify_medicine);
  RUN_TEST(test_search_medicine);
  RUN_TEST(test_display_medicine);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

void test_add_medicine(void) {
  TEST_ASSERT_EQUAL(0, add_medicine("Add_1", "mname", "1234", "1234", "cname", "12-12-1234", "12-12-1234"));
}

void test_delete_medicine(void) {
  TEST_ASSERT_EQUAL(0, add_medicine("Delete_1", "mname", "1234", "1234", "cname", "12-12-1234", "12-12-1234"));
  TEST_ASSERT_EQUAL(0, delete_medicine("Delete_1", "mname", "1234", "1234", "cname", "12-12-1234", "12-12-1234"));
}

void test_modify_medicine(void) {
  TEST_ASSERT_EQUAL(0, add_medicine("Modify_1", "mname", "1234", "1234", "cname", "12-12-1234", "12-12-1234"));
  TEST_ASSERT_EQUAL(0, modify_medicine("Modify_1", "mname", "1234", "1234", "cname", "12-12-1234", "12-12-1234", "Modified_id", "mname1", "123", "123", "cname1", "11-11-1235", "11-10-1235"));
  TEST_ASSERT_EQUAL(0, delete_medicine("Modified_id", "mname1", "123", "123", "cname1", "11-11-1235", "11-10-1235"));
}
void test_search_medicine(void) {
  TEST_ASSERT_EQUAL(0, add_medicine("Search_1", "mname", "1234", "1234", "cname", "12-12-1234", "12-12-1234"));
  TEST_ASSERT_EQUAL(0 , search_medicine("Search_1", "mname", "1234", "1234", "cname", "12-12-1234", "12-12-1234"));
  TEST_ASSERT_EQUAL(0, delete_medicine("Search_1", "mname", "1234", "1234", "cname", "12-12-1234", "12-12-1234"));
}
void test_display_medicine(void) 
{ 
  TEST_ASSERT_EQUAL(1, display_medicine()>0);
}
