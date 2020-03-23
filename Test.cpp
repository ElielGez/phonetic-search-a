/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: Eliel Gez,Daniel Twito
 * 
 * Date: 2020-02
 */

#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;

#include <string>
using namespace std;

TEST_CASE("Test replacement of v and w") // 10 tests
{
    string wordFromText = "waved";
    string text = "He " + wordFromText + " his hand hospitably";

    //lower-case
    CHECK(find(text, "waved") == string(wordFromText));
    CHECK(find(text, "vaved") == string(wordFromText));
    CHECK(find(text, "vawed") == string(wordFromText));
    CHECK(find(text, "wawed") == string(wordFromText));

    //upper-case
    CHECK(find(text, "Waved") == string(wordFromText));
    CHECK(find(text, "Vaved") == string(wordFromText));
    CHECK(find(text, "vaWed") == string(wordFromText));
    CHECK(find(text, "WaWed") == string(wordFromText));

    //throw - word isn't in the sentence
    CHECK_THROWS_AS(find(text, "wave"), std::exception);
    CHECK_THROWS_AS(find(text, "vawe"), std::exception);
}

TEST_CASE("Test replacement of b and p") // 10 tests
{
    string wordFromText = "plumb";
    string text = "fell " + wordFromText + " in the middle of the puddle";

    //lower-case
    CHECK(find(text, "plumb") == string(wordFromText));
    CHECK(find(text, "blumb") == string(wordFromText));
    CHECK(find(text, "blump") == string(wordFromText));
    CHECK(find(text, "plump") == string(wordFromText));

    //upper-case
    CHECK(find(text, "PlumB") == string(wordFromText));
    CHECK(find(text, "Blumb") == string(wordFromText));
    CHECK(find(text, "blumP") == string(wordFromText));
    CHECK(find(text, "Plump") == string(wordFromText));

    //throw - word isn't in the sentence
    CHECK_THROWS_AS(find(text, "plum"), std::exception);
    CHECK_THROWS_AS(find(text, "blum"), std::exception);
}

TEST_CASE("Test replacement of f and p") // 10 tests
{
    string wordFromText = "flip";
    string text = "a " + wordFromText + " answer to serious question";

    //lower-case
    CHECK(find(text, "flip") == string(wordFromText));
    CHECK(find(text, "flif") == string(wordFromText));
    CHECK(find(text, "plif") == string(wordFromText));
    CHECK(find(text, "plip") == string(wordFromText));

    //upper-case
    CHECK(find(text, "FLIP") == string(wordFromText));
    CHECK(find(text, "fliF") == string(wordFromText));
    CHECK(find(text, "Plif") == string(wordFromText));
    CHECK(find(text, "PLIP") == string(wordFromText));

    //throw - word isn't in the sentence
    CHECK_THROWS_AS(find(text, "pli"), std::exception);
    CHECK_THROWS_AS(find(text, "fli"), std::exception);
}

TEST_CASE("Test replacement of j and g") // 10 tests
{
    string wordFromText = "jangle";
    string text = "the " + wordFromText + " of spurs";

    //lower-case
    CHECK(find(text, "jangle") == string(wordFromText));
    CHECK(find(text, "janjle") == string(wordFromText));
    CHECK(find(text, "ganjel") == string(wordFromText));
    CHECK(find(text, "gangel") == string(wordFromText));

    //upper-case
    CHECK(find(text, "JangeL") == string(wordFromText));
    CHECK(find(text, "Janjel") == string(wordFromText));
    CHECK(find(text, "GanJel") == string(wordFromText));
    CHECK(find(text, "GANGEL") == string(wordFromText));

    //throw - word isn't in the sentence
    CHECK_THROWS_AS(find(text, "jange"), std::exception);
    CHECK_THROWS_AS(find(text, "gange"), std::exception);
}

TEST_CASE("Test replacement of c and k") // 10 tests
{
    string wordFromText = "back";
    string text = "never look " + wordFromText;

    //lower-case
    CHECK(find(text, "back") == string(wordFromText));
    CHECK(find(text, "bakk") == string(wordFromText));
    CHECK(find(text, "bacc") == string(wordFromText));
    CHECK(find(text, "bakc") == string(wordFromText));

    //upper-case
    CHECK(find(text, "Back") == string(wordFromText));
    CHECK(find(text, "baKK") == string(wordFromText));
    CHECK(find(text, "baCC") == string(wordFromText));
    CHECK(find(text, "baKc") == string(wordFromText));

    //throw - word isn't in the sentence
    CHECK_THROWS_AS(find(text, "bac"), std::exception);
    CHECK_THROWS_AS(find(text, "bak"), std::exception);
}

TEST_CASE("Test replacement of k and q") // 10 tests
{
    string wordFromText = "quick";
    string text = "come here, " + wordFromText;

    //lower-case
    CHECK(find(text, "quick") == string(wordFromText));
    CHECK(find(text, "kuick") == string(wordFromText));
    CHECK(find(text, "quicq") == string(wordFromText));
    CHECK(find(text, "kuicq") == string(wordFromText));

    //upper-case
    CHECK(find(text, "Quick") == string(wordFromText));
    CHECK(find(text, "Kuick") == string(wordFromText));
    CHECK(find(text, "quicQ") == string(wordFromText));
    CHECK(find(text, "kuicQ") == string(wordFromText));

    //throw - word isn't in the sentence
    CHECK_THROWS_AS(find(text, "quic"), std::exception);
    CHECK_THROWS_AS(find(text, "kuic"), std::exception);
}

TEST_CASE("Test replacement of s and z") // 5 tests
{
    string wordFromText = "famous";
    string text = "a " + wordFromText + " actor";

    //lower-case
    CHECK(find(text, "famous") == string(wordFromText));
    CHECK(find(text, "famouz") == string(wordFromText));

    //upper-case
    CHECK(find(text, "Famous") == string(wordFromText));
    CHECK(find(text, "Famous") == string(wordFromText));

    //throw - word isn't in the sentence
    CHECK_THROWS_AS(find(text, "famou"), std::exception);
}

TEST_CASE("Test replacement of s and z") // 5 tests
{
    string wordFromText = "small";
    string text = "Here is a " + wordFromText + " harbour";

    //lower-case
    CHECK(find(text, "small") == string(wordFromText));
    CHECK(find(text, "zmall") == string(wordFromText));

    //upper-case
    CHECK(find(text, "Small") == string(wordFromText));
    CHECK(find(text, "Zmall") == string(wordFromText));

    //throw - word isn't in the sentence
    CHECK_THROWS_AS(find(text, "smal"), std::exception);
}

TEST_CASE("Test replacement of d and t") // 10 tests
{
    string wordFromText = "detective";
    string text = "The " + wordFromText + " examined the window frame for fingerprints";

    //lower-case
    CHECK(find(text, "detective") == string(wordFromText));
    CHECK(find(text, "tetective") == string(wordFromText));
    CHECK(find(text, "dedective") == string(wordFromText));
    CHECK(find(text, "detecdive") == string(wordFromText));

    //upper-case
    CHECK(find(text, "Detective") == string(wordFromText));
    CHECK(find(text, "tetecTive") == string(wordFromText));
    CHECK(find(text, "deDective") == string(wordFromText));
    CHECK(find(text, "detecDive") == string(wordFromText));

    //throw - word isn't in the sentence
    CHECK_THROWS_AS(find(text, "detecti"), std::exception);
    CHECK_THROWS_AS(find(text, "detectiv"), std::exception);
}

TEST_CASE("Mix of Test replacement") // 10 tests
{
    string text = "Dond vorri be haffy";

    //lower-case
    CHECK(find(text, "dont") == string("Dond"));
    CHECK(find(text, "worry") == string("vorri"));
    CHECK(find(text, "be") == string("be"));
    CHECK(find(text, "happy") == string("haffy"));

    //upper-case
    CHECK(find(text, "DONT") == string("Dond"));
    CHECK(find(text, "woRRy") == string("vorri"));
    CHECK(find(text, "BE") == string("be"));
    CHECK(find(text, "Happy") == string("happy"));

    //throw - word isn't in the sentence
    CHECK_THROWS_AS(find(text, "don"), std::exception);
    CHECK_THROWS_AS(find(text, "happ"), std::exception);
}

TEST_CASE("Mix of Test replacement") // 10 tests
{
    string text = "harri putter and the corsed child";

    //lower-case
    CHECK(find(text, "harry") == string("harri"));
    CHECK(find(text, "potter") == string("putter"));
    CHECK(find(text, "and") == string("and"));
    CHECK(find(text, "cursed") == string("corsed"));

    //upper-case
    CHECK(find(text, "HarrY") == string("harri"));
    CHECK(find(text, "POTTER") == string("putter"));
    CHECK(find(text, "AnD") == string("and"));
    CHECK(find(text, "CURsed") == string("corsed"));

    //throw - word isn't in the sentence
    CHECK_THROWS_AS(find(text, "potte"), std::exception);
    CHECK_THROWS_AS(find(text, "harr"), std::exception);
}

/* Add more test cases here */
