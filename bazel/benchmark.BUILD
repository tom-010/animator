licenses(["notice"])

config_setting(
    name = "windows",
    values = {
        "cpu": "x64_windows",
    },
    visibility = [":__subpackages__"],
)

load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "benchmark",
    srcs = glob(
        [
            "src/*.cc",
            "src/*.h",
        ],
        exclude = ["src/benchmark_main.cc"],
    ),
    hdrs = ["include/benchmark/benchmark.h"],
    linkopts = select({
        ":windows": ["-DEFAULTLIB:shlwapi.lib"],
        "//conditions:default": ["-pthread"],
    }),
    strip_include_prefix = "include",
    visibility = ["//visibility:public"],
)

cc_library(
    name = "benchmark_main",
    srcs = ["src/benchmark_main.cc"],
    hdrs = ["include/benchmark/benchmark.h"],
    strip_include_prefix = "include",
    visibility = ["//visibility:public"],
    deps = [":benchmark"],
)

cc_library(
    name = "benchmark_internal_headers",
    hdrs = glob(["src/*.h"]),
    visibility = ["//test:__pkg__"],
)