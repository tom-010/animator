load("@rules_cc//cc:defs.bzl", "cc_library", "cc_test")


# Top-level C++ Targets for cxx_template

TEST_LIBRARY_SRCS = glob([
    "**/*test_helpers.cc",
    "**/fake_*.cc",
    "**/mock_*.cc",
])

TEST_LIBRARY_HDRS = glob([
    "**/*test_helpers.h",
    "**/fake_*.h",
    "**/mock_*.h",
])

cc_library(
    name = "font_test_library",
    testonly = 1,
    srcs = TEST_LIBRARY_SRCS,
    hdrs = TEST_LIBRARY_HDRS,
    deps = [
        ":font",
        "@gtest//:gtest_main",
    ],
)

cc_library(
    name = "font",
    srcs = glob(
        [
            "**/*.cc",
        ],
        exclude = [
            "**/*_main.cc",
            "**/*_test.cc",
        ] + TEST_LIBRARY_SRCS,
    ),
    hdrs = [
        "common/config.h",
    ] + glob(
        [
            "**/*.h",
        ],
        exclude = TEST_LIBRARY_HDRS,
    ),
    copts = ["-Wno-sign-compare"],
    includes = ["."],
    deps = [
        "@com_google_absl//absl/base",
        "@com_google_absl//absl/container:flat_hash_map",
        "@com_google_absl//absl/container:flat_hash_set",
        "@com_google_absl//absl/strings",
        "@com_google_absl//absl/strings:str_format",
        "@com_google_absl//absl/synchronization",
        "@com_google_absl//absl/types:optional",
        # "@com_google_glog//:glog",
        # "@org_tuxfamily_eigen//:eigen",
    ],
)

[cc_test(
    name = src.replace("/", "_").replace(".cc", ""),
    srcs = [src],
    data = ["//:configuration_files"],
    deps = [
        ":cxx_template",
        ":cxx_template_test_library",
        "@com_google_absl//absl/memory",
        "@com_google_googletest//:gtest_main",
    ],
) for src in glob(
    ["**/*_test.cc"],
)]
