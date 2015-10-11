#define CATCH_CONFIG_MAIN
#include <test/utils.hpp>

TEST_CASE("Formats", "[formats]")
{
    for (auto _ : 1000_)
    {
        REQUIRE(1 == 1);
    }
}
