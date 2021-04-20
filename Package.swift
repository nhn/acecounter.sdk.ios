// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "ACE",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "ACE", 
            targets: ["ACE"])
    ],
    targets: [
        .binaryTarget(
            name: "ACE", 
            path: "./framework/ACE.xcframework")
    ])