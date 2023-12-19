package saeedrz.yawa.openweather

import io.ktor.client.HttpClient
import io.ktor.client.engine.cio.CIO
import io.ktor.client.plugins.contentnegotiation.ContentNegotiation
import io.ktor.serialization.kotlinx.json.*

class OpenWeatherAPI {
    private val client = HttpClient(CIO) {
        install(ContentNegotiation) {
            json()
        }
    }

    fun getCurrentWeatherData(): String {
        return "Hello Weather"
    }
}