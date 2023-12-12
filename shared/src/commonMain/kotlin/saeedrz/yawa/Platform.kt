package saeedrz.yawa

interface Platform {
    val name: String
}

expect fun getPlatform(): Platform