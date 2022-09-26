#include "gmock/gmock.h"

#include "example.h"

using namespace testing;

namespace foobar::tests
{
	TEST(ExampleTests, Example) {
		foobar::Example example{};
        ASSERT_THAT(example.getValue(), Eq(99));
	}
}
TEST(area_circulo, 1) 
{
	int radio = 2;
	float* area = new float;
	area_circulo(radio,area);
	ASSERT_THAT((*area), Eq(99));
}
TEST(area_circulo, 1)
{
	int radio = 0;
	float* area = new float;
	area_circulo(radio, area);
	ASSERT_THAT((*area), Eq(0));
	delete area;
}
TEST(area_circulo, 2)
{
	int radio = 5;
	float* area = new float;
	area_circulo(radio, area);
	ASSERT_THAT((*area), 78.5);
	delete area;
}
TEST(area_circulo, 3)
{
	int radio = 0;
	float* area = new float;
	area_circulo(radio, area);
	delete area;
	ASSERT_THAT((*area), 0);
}