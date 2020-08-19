load("@rules_cc//cc:defs.bzl", "cc_library", "cc_test")

cc_library(
    name = "render_text",
    srcs = ["render_text.cc"],
    hdrs = ["render_text.h"],
    visibility = ["//visibility:public"],
)

cc_test(
    name = "render_text_test",
    srcs = ["render_text_test.cc"],
    deps = [
        "//font/render:render_text",
        "@gtest//:gtest_main",
    ],
)