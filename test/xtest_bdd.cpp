/*
==============================================================================
Author: Michael Gene Brockus (Dreamer)
Email: michaelbrockus@gmail.com
Organization: Fossil Logic
Description: 
    This file is part of the Fossil Logic project, where innovation meets
    excellence in software development. Michael Gene Brockus, also known as
    "Dreamer," is a dedicated contributor to this project. For any inquiries,
    feel free to contact Michael at michaelbrockus@gmail.com.
==============================================================================
*/
#include <fossil/xtest.hpp>
#include <fossil/xexpect.hpp>

//
// XUNIT-TEST: test case
//
XTEST_CASE(xbdd_logic_test) {
    GIVEN("a valid statement is passed") {
        // Set up the context
        bool givenExecuted = true;

        WHEN("a statement is true") {
            // Perform the login action
            bool whenExecuted = true;
            
            THEN("we validate everything was worked") {
                // Check the expected outcome
                bool thenExecuted = true;

                TEST_EXPECT_TRUE(givenExecuted);
                TEST_EXPECT_TRUE(whenExecuted);
                TEST_EXPECT_TRUE(thenExecuted);
            }
        }
    }
} // end of case

XTEST_CASE(xbdd_user_account) {
    GIVEN("a user's account with sufficient balance") {
        // Set up the context
        float accountBalance = 500.0;
        float withdrawalAmount = 200.0;

        WHEN("the user requests a withdrawal of $200") {
            // Perform the withdrawal action
            if (accountBalance >= withdrawalAmount) {
                accountBalance -= withdrawalAmount;
            } // end if
            THEN("the withdrawal amount should be deducted from the account balance") {
                // Check the expected outcome

                // Simulate the scenario
                float compareBalance = 500.0;
                TEST_EXPECT_FLOAT_LESS(accountBalance, compareBalance);
            }
        }
    }
} // end of case

XTEST_CASE(xbdd_empty_cart) {
    GIVEN("a user with an empty shopping cart") {
        // Set up the context
        int cartItemCount = 0;

        WHEN("the user adds a product to the cart") {
            // Perform the action of adding a product

            THEN("the cart item count should increase by 1") {
                // Check the expected outcome
                cartItemCount++;

                TEST_EXPECT_EQUAL_INT(cartItemCount, 1);
            }
        }
    }
} // end of case

XTEST_CASE(xbdd_valid_login) {
    GIVEN("a registered user with valid credentials") {
        // Set up the context
        const char* validUsername = "user123";
        const char* validPassword = "pass456";

        WHEN("the user provides correct username and password") {
            // Perform the action of user login
            const char* inputUsername = "user123";
            const char* inputPassword = "pass456";

            THEN("the login should be successful") {
                // Check the expected outcome
                // Simulate login validation
                TEST_EXPECT_EQUAL_STRING(inputUsername, validUsername);
                TEST_EXPECT_EQUAL_STRING(inputPassword, validPassword);
            }
        }

        WHEN("the user provides incorrect password") {
            // Perform the action of user login
            const char* inputUsername = "user123";
            const char* inputPassword = "wrongpass";

            THEN("the login should fail with an error message") {
                // Check the expected outcome
                // Simulate login validation
                TEST_EXPECT_EQUAL_STRING(inputUsername, validUsername);
                TEST_EXPECT_NOT_EQUAL_STRING(inputPassword, validPassword);
            }
        }
    }
} // end of case

//
// XUNIT-GROUP:
//
XTEST_DEFINE_POOL(bdd_test_group) {
    XTEST_RUN_UNIT(xbdd_logic_test);
    XTEST_RUN_UNIT(xbdd_user_account);
    XTEST_RUN_UNIT(xbdd_empty_cart);
    XTEST_RUN_UNIT(xbdd_valid_login);
} // end of group
