// swift-tools-version:5.9
import PackageDescription

let package = Package(
    name: "YAWAShared",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "YAWAShared",
            targets: ["YAWAShared"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "YAWAShared",
            path: "./release/YAWAShared.xcframework"
        ),
    ]
)
