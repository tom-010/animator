load("@rules_cc//cc:defs.bzl", "cc_binary")


cc_binary(
    name="hello_world",
    srcs = ["hello_world.cc"],
    deps = [
        "@benchmark//:benchmark",
        "@glog//:glog",
        "//template_module/hello_greet:hello_greet",
        "//template_module/hello_time:hello_time",
        "@com_google_absl//absl/strings"
    ],
)

cc_binary(
    name="hello_world_benchmark",
    srcs = ["hello_world_benchmark.cc"],
    deps = [
        "@benchmark//:benchmark",
        "//template_module/hello_greet:hello_greet",
        "//template_module/hello_time:hello_time",
    ],
)