code = files('module.cpp')

lib = static_library('fscl-cpp',
    code,
    include_directories: dir)

fscl_cpp_dep = declare_dependency(
    link_with: lib,
    include_directories: dir)
