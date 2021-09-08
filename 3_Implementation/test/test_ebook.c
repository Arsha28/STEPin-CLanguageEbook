#include "unity.h"

#include "topicfunctions.h"
#include "user.h"





/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}




/* Prototypes for all the test functions */


void test_Topicindex(void){
        
  		TEST_ASSERT_EQUAL(0,Topicindex());
}
void test_introductions(void){
        
  		TEST_ASSERT_EQUAL(0,introductions());
}
void test_ConditionsLoops(void){
        
  		TEST_ASSERT_EQUAL(0,ConditionLoops());
}
void test_FunctionsArraypointer(void){
    TEST_ASSERT_EQUAL(0,FunctionsArraypointer());
}

void test_strings(void){
    TEST_ASSERT_EQUAL(0,strings());
}



int main(void)
{
UNITY_BEGIN();
RUN_TEST(test_Topicindex);
RUN_TEST(test_introductions);
RUN_TEST(test_ConditionsLoops);
RUN_TEST(test_FunctionsArraypointer);
RUN_TEST(test_strings);
return UNITY_END();
}