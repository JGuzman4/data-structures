workspace("cppDS")
configurations({ "Release" })

project("cppDS")
kind("ConsoleApp")
language("C++")
cppdialect("C++17")
targetdir("build/%{cfg.buildcfg}")

includedirs({ "include" })

files({ "**.h", "**.cpp" })

filter("configurations:Release")
defines({ "NDEBUG" })
optimize("On")
