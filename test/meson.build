if get_option('with_test').enabled()
    test_deps = [
        dependency('fscl-xtest-c')
    ]

    test_src = ['xunit_runner.cpp']
    test_cubes = ['cases']

    foreach cube : test_cubes
        test_src += ['xtest_' + cube + '.cpp']
    endforeach

    pizza = executable('xcli', test_src, include_directories: dir, dependencies: [test_deps, fscl_cpp_dep])
    test('xunit_tests', pizza)  # Renamed the test target for clarity
endif
