load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "gtest",
    url = "https://github.com/google/googletest/archive/release-1.10.0.zip",
    sha256 = "94c634d499558a76fa649edb13721dce6e98fb1e7018dfaeba3cd7a083945e91",
    build_file = "@//bazel:gtest.BUILD",
    strip_prefix = "googletest-release-1.10.0",
)

http_archive(
  name = "com_google_absl",
  sha256 = "aabf6c57e3834f8dc3873a927f37eaf69975d4b28117fc7427dfb1c661542a87",
  url = "https://github.com/abseil/abseil-cpp/archive/98eb410c93ad059f9bba1bf43f5bb916fc92a5ea.zip",
  strip_prefix = "abseil-cpp-98eb410c93ad059f9bba1bf43f5bb916fc92a5ea",
)

http_archive(
  name = "rules_cc",
  sha256 = "9a446e9dd9c1bb180c86977a8dc1e9e659550ae732ae58bd2e8fd51e15b2c91d",
  url = "https://github.com/bazelbuild/rules_cc/archive/262ebec3c2296296526740db4aefce68c80de7fa.zip",
  strip_prefix = "rules_cc-262ebec3c2296296526740db4aefce68c80de7fa",
)

http_archive(
  name = "com_github_gflags_gflags",
  sha256 = "6e16c8bc91b1310a44f3965e616383dbda48f83e8c1eaa2370a215057b00cabe",
  strip_prefix = "gflags-77592648e3f3be87d6c7123eb81cbad75f9aef5a",
  urls = [
      "https://mirror.bazel.build/github.com/gflags/gflags/archive/77592648e3f3be87d6c7123eb81cbad75f9aef5a.tar.gz",
      "https://github.com/gflags/gflags/archive/77592648e3f3be87d6c7123eb81cbad75f9aef5a.tar.gz",
  ]
)

http_archive (
  name = "glog",
  sha256 = "dfc074b41a5b86fc5dda4f0e2e2d6cc5b21f798c9fcc8ed5fea9c8f7c4613be6",
  strip_prefix = "glog-dd2b93d761a19860190cb3fa92066c8031e912e3",
  urls = [
      "https://mirror.bazel.build/github.com/google/glog/archive/dd2b93d761a19860190cb3fa92066c8031e912e3.tar.gz",
      "https://github.com/google/glog/archive/dd2b93d761a19860190cb3fa92066c8031e912e3.tar.gz",
  ],
)

http_archive (
  name = "benchmark",
  sha256 = "3e266b49f73ee08625837ea5b1fabc4056b7f5e809b29c49670527326f4f4379",
  url = "https://github.com/google/benchmark/archive/v1.5.1.zip",
  strip_prefix = "benchmark-1.5.1",
  build_file = "@//bazel:benchmark.BUILD"
)

http_archive(
  name = "org_freetype_freetype2",
  build_file = "@//bazel:freetype2.BUILD",
  sha256 = "33a28fabac471891d0523033e99c0005b95e5618dc8ffa7fa47f9dadcacb1c9b",
  strip_prefix = "freetype-2.8",
  urls = [
      "https://mirror.bazel.build/download.savannah.gnu.org/releases/freetype/freetype-2.8.tar.gz",
      "http://download.savannah.gnu.org/releases/freetype/freetype-2.8.tar.gz",
  ]
)

http_archive(
  name = "net_zlib_zlib",
  sha256 = "6d4d6640ca3121620995ee255945161821218752b551a1a180f4215f7d124d45",
  build_file = "@//bazel:zlib.BUILD",
  strip_prefix = "zlib-cacf7f1d4e3d44d871b605da3b647f07d718623f",
  urls = [
      "https://mirror.bazel.build/github.com/madler/zlib/archive/cacf7f1d4e3d44d871b605da3b647f07d718623f.tar.gz",
      "https://github.com/madler/zlib/archive/cacf7f1d4e3d44d871b605da3b647f07d718623f.tar.gz",
  ],
)

http_archive(
    name = "org_libpng_libpng",
    build_file = "@//bazel:libpng.BUILD",
    sha256 = "7f415186d38ca71c23058386d7cf5135c8beda821ee1beecdc2a7a26c0356615",
    strip_prefix = "libpng-1.2.57",
    urls = [
        "https://github.com/glennrp/libpng/archive/v1.2.57.tar.gz",
    ],
)

