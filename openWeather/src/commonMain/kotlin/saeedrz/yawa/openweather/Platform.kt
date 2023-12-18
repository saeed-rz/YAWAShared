package saeedrz.yawa.openweather

interface Platform {
    val name: String
}

expect fun getPlatform(): Platform