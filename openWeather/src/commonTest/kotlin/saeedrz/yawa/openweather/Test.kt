package saeedrz.yawa.openweather

import kotlin.test.Test
import kotlin.test.assertTrue

class CommonGreetingTest {

    @Test
    fun testExample() {
        assertTrue(OpenWeatherAPI().getCurrentWeatherData().contains("HelloWeather"), "Check 'Hello' is mentioned")
    }
}