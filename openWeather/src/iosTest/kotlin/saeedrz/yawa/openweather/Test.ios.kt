package saeedrz.yawa.openweather

import kotlin.test.Test
import kotlin.test.assertTrue

class IosGreetingTest {

    @Test
    fun testExample() {
        assertTrue(OpenWeatherAPI().getCurrentWeatherData().contains("iOS"), "Check iOS is mentioned")
    }
}