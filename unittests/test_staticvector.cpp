#include "catch.hpp"
#include "../staticvector.h"


TEST_CASE("Static Vector init")
{
    char buffer[1024];
    struct StaticVector *vector = (struct StaticVector *) buffer;

    REQUIRE(StaticVector_init(sizeof(int), buffer, sizeof(buffer)) == 0);

    REQUIRE(vector->elt_size == sizeof(int));
    REQUIRE(vector->len == 0);
    REQUIRE(vector->max_len == 252);
    char too_small[sizeof(struct StaticVector)];
    REQUIRE(StaticVector_init(sizeof(int), too_small, sizeof(too_small)) < 0);
}

TEST_CASE("Static Vector of Integers")
{
    char buffer[256];
    struct StaticVector *vector = (struct StaticVector *) buffer;
    StaticVector_init(sizeof(int), buffer, sizeof(buffer));

    SECTION("append") {
        for (int i = 0; i < vector->max_len; i++) {
            StaticVector_append(vector, &i);
        }
        REQUIRE(vector->max_len == vector->len);
        for (int i = 0; i < vector->max_len; i++) {
            REQUIRE(*(int *) StaticVector_getitem(vector, i) == i);
        }
    }

    SECTION("insert") {
        
    }

    SECTION("delitem") {

    }

}