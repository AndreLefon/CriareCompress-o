package(default_visibility = ["//visibility:public"])

licenses(["notice"])  # Apache 2.0

cc_binary(
    name = "libtensorflow_compression.so",
    srcs = glob(
        include = [
            "kernels/*.h",
            "kernels/*.cc",
            "lib/*.h",
            "lib/*.cc",
            "ops/*.cc",
        ],
        exclude = [
            "**/*_test.cc",
        ],
    ),
    copts = [
        "-pthread",
        "-std=c++17",
    ],
    linkshared = 1,
    visibility = ["//visibility:public"],
    deps = [
        # When building this binary together with TensorFlow, i.e., when using
        # manually built TensorFlow, add the TensorFlow repo in WORKSPACE file
        # as, say "org_tensorflow" and replace the deps with
        #   "@org_tensorflow//tensorflow/core:framework",
        #   "@org_tensorflow//tensorflow/core:lib",
        "@tensorflow_pip//:libtensorflow_framework",
    ],
)
