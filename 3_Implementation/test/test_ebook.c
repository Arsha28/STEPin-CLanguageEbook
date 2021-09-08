#include "unity.h"
#include "panalcolor.h"
#include "topicfunctions.h"
#include "user.h"
#include "topics.h"




/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}




/* Prototypes for all the test functions */
void test_functions(void){
    int a =10;
    TEST_ASSERT_EQUAL_INT(a, functions());
    
    

}



int main(void)
{
UNITY_BEGIN();
RUN_TEST(test_functions);
return UNITY_END();
}