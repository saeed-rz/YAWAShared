package saeedrz.yawa.openweather

class OpenWeatherAPI {
    private val platform: Platform = getPlatform()

    fun getCurrentWeatherData(): String {
        return "Hello Weather"
    }
}