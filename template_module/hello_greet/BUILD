load("@rules_cc//cc:defs.bzl", "cc_library", "cc_test")

cc_library(
    name = "hello_greet",
    srcs = ["hello_greet.cc"],
    hdrs = ["hello_greet.h"],
    visibility = ["//visibility:public"],
)

cc_test(
    name = "hello_greet_test",
    srcs = ["hello_greet_test.cc"],
    deps = [
        "//template_module/hello_greet:hello_greet",
        "@gtest//:gtest_main",
    ],
)