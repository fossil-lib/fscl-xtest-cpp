if get_option('with_test').enabled()
    configure_file(input: 'example.txt', output: 'example.txt', copy: true)

    test_src = ['xunit_runner.cpp']
    test_cubes = ['xexpect', 'xassert', 'bench', 'bdd', 'tdd']

    foreach cube : test_cubes
        test_src += ['xtest_' + cube + '.cpp']
    endforeach

    pizza = executable('xcli', test_src, include_directories: dir, dependencies: [fscl_xtest_cpp_dep])
    test('xunit_tests', pizza)  # Renamed the test target for clarity
endif
