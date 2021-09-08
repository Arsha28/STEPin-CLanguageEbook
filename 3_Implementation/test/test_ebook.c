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




int main(void)
{
UNITY_BEGIN();
RUN_TEST(test_Topicindex);
RUN_TEST(test_introductions);
return UNITY_END();
}