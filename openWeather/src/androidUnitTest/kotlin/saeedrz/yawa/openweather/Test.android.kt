package saeedrz.yawa.openweather

import org.junit.Assert.assertTrue
import org.junit.Test

class AndroidOpenWeatherAPITest {

    @Test
    fun testExample() {
        assertTrue("Check Android is mentioned", OpenWeatherAPI().getCurrentWeatherData().contains("Android"))
    }
}