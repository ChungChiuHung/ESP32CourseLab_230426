#include <unity.h>
#include <HardwareSerial.h>

void test_uart_output()
{
    HardwareSerial Serial(0);
    Serial.begin(9600);
    Serial.println("Testing UART output");

    TEST_ASSERT_EQUAL_STRING("Testing UART output", Serial.readString().c_str());
}

void setup(){
    UNITY_BEGIN();
    RUN_TEST(test_uart_output);
    UNITY_END();
}

void loop(){
    
}