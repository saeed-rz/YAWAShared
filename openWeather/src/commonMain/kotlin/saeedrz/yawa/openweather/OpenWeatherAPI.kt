package saeedrz.yawa.openweather

import io.ktor.client.HttpClient
import io.ktor.client.call.body
import io.ktor.client.engine.cio.CIO
import io.ktor.client.plugins.contentnegotiation.ContentNegotiation
import io.ktor.client.request.get
import io.ktor.serialization.kotlinx.json.*
import saeedrz.yawa.openweather.data.GeoData
import saeedrz.yawa.openweather.data.WeatherData

class OpenWeatherAPI {
    private val client = HttpClient() {
        install(ContentNegotiation) {
            json()
        }
    }

    suspend fun getCurrentWeatherData(lat: Double, lon: Double, appId: String): WeatherData {
        return client.get("https://api.openweathermap.org/data/2.5/weather?lat=$lat&lon=$lon&appid=$appId").body<WeatherData>()
    }

    suspend fun searchCity(searchTerm: String, appId: String): List<GeoData> {
        return client.get("https://api.openweathermap.org/geo/1.0/direct?q=$searchTerm&limit=5&appid=$appId").body<List<GeoData>>()
    }
}