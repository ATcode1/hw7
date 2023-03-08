#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "hw7.h"
#include "doctest.h"

TEST_CASE("Test 1") {
    SUBCASE("Check perfect / non-perfect"){
        CHECK(int_perf(2) == false);
        CHECK(int_perf(3) == false);
        CHECK(int_perf(6) == true);
        CHECK(int_perf(28) == true);
    }
}
