import PackageDescription
let package = Package(
    name: "ACE",
    platforms: [
        .iOS(.v12)
    ],
    products: [
        .library(
            name: "ACE", 
            targets: ["ACE"])
    ],
    targets: [
        .binaryTarget(
            name: "ACE", 
            path: "ACE.xcframework")
    ])