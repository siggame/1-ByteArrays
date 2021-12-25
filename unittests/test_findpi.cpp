#include "catch.hpp"
#include "../testdata.h"
#include "../findpi.h"
#include <math.h>

TEST_CASE("FIND_PI")
{
    char bytesdata[1024];
    
    for (int i = 0; i < 32; i++) {
        int location = generate_data_find_pi(bytesdata, sizeof(bytesdata));
        REQUIRE(find_pi(bytesdata, sizeof(bytesdata)) == location);
    }
}
