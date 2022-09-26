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
	float radio = 2;
	float* area = new float;
	area_circulo(radio,area);
	EXPECT_NE((*area), 99);
	delete area;
}
TEST(area_circulo, 2)
{
	float radio = 0;
	float* area = new float;
	area_circulo(radio, area);
	ASSERT_THAT((*area), Eq(0));
	delete area;
}
TEST(area_circulo, 3)
{
	int radio = 5;
	float* area = new float;
	area_circulo(radio, area);
	ASSERT_THAT((*area), 78.5);
	delete area;
}
TEST(area_circulo, 4)
{
	float radio = 0;
	float* area = new float;
	area_circulo(radio, area);
	ASSERT_THAT((*area), 0);
	delete area;
	
}

TEST(area_circulo, 5)
{
	float radio = 0;
	float* area = new float;
	area_circulo(radio, area);
	EXPECT_EQ((*area), 0);
	delete area;
	
}

TEST(Distancia, 1)
{
	float* punto1 = new float[2];
	float* punto2 = new float[2];
	punto1[0] = 0;
	punto1[1] = 0;
	punto2[0] = 0;
	punto2[1] = 0;
	ASSERT_THAT(Distancia(punto1, punto2), 0);
	delete []punto1;
	delete []punto2;
}
TEST(Distancia, 2)
{
	float* punto1 = new float[2];
	float* punto2 = new float[2];
	punto1[0] = -1;
	punto1[1] = -2;
	punto2[0] = -3;
	punto2[1] = -4;
	ASSERT_THAT(Distancia(punto1, punto2), 2.83);
	delete[]punto1;
	delete[]punto2;
}
TEST(Distancia, 3)
{
	float* punto1 = new float[2];
	float* punto2 = new float[2];
	punto1[0] = 1.2;
	punto1[1] = 0.5;
	punto2[0] = -0.5;
	punto2[1] = 3;
	ASSERT_THAT(Distancia(punto1, punto2), 3.02);
	delete[]punto1;
	delete[]punto2;
}