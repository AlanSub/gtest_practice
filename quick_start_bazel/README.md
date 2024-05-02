# A practice for [Quickstart:Building with Bazel](https://google.github.io/googletest/quickstart-bazel.html)
## Simple GoogleTest hello world practice
After installing Bazel, you can build and run test:

my_workspace$ bazel test --cxxopt=-std=c++14 --test_output=all //:hello_test
