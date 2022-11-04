#include <gmock/gmock.h>

#include <mock_radio.h>
#include <car.h>

using namespace std;
using namespace testing;

class CarTestFixture : public Test
{
public:
    CarTestFixture()
        : m_testCar("Bogus", "Fake")
    {}

protected:
    NiceMock<RadioMock> m_radioMock;
    Car m_testCar;
    float m_cachedVolume;
};

TEST_F(CarTestFixture, TestReversalLowersVolume)
{
    EXPECT_CALL(m_radioMock, volume(10)).WillOnce(Return(10));
    m_testCar.reverse();
}
