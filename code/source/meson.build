code = files('xtest.cpp')

lib = static_library('fscl-xtest-cpp',
    code,
    include_directories: dir)

fscl_xtest_cpp_dep = declare_dependency(
    link_with: lib,
    include_directories: dir)
