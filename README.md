[![Build Status](https://github.com/bast/gtest-demo/actions/workflows/test.yml/badge.svg)](https://github.com/bast/gtest-demo/actions/workflows/test.yml)
[![Coverage Status](https://coveralls.io/repos/bast/gtest-demo/badge.png?branch=master)](https://coveralls.io/r/bast/gtest-demo?branch=master)
[![License](https://img.shields.io/badge/license-%20BSD--3-blue.svg)](../master/LICENSE)


# gtest-demo

C/C++ unit test demo using [Google Test](https://code.google.com/p/googletest)
with continuous integration provided by [GitHub
Actions](https://docs.github.com/en/actions) and test coverage deployed to
[Coveralls](https://coveralls.io/r/bast/gtest-demo).

- [Build and test history](https://github.com/bast/gtest-demo/actions)
- [Code coverage](https://coveralls.io/r/bast/gtest-demo)
- Licensed under [BSD-3](../master/LICENSE)


## How to build this demo

```bash
git clone https://github.com/bast/gtest-demo.git
cd gtest-demo
cmake -S. -Bbuild 
cmake --build build
```


## Running the tests

Either using `ctest`:
```
$ cd build
$ ctest

Test project google-test-toehold/build
    Start 1: example.add
1/4 Test #1: example.add ......................   Passed    0.03 sec
    Start 2: example.c_add
2/4 Test #2: example.c_add ....................   Passed    0.01 sec
    Start 3: example.subtract
3/4 Test #3: example.subtract .................   Passed    0.02 sec
    Start 4: example.c_subtract
4/4 Test #4: example.c_subtract ...............   Passed    0.01 sec

100% tests passed, 0 tests failed out of 4

Label Time Summary:
unit    =   0.07 sec*proc (4 tests)

Total Test time (real) =   0.14 sec
```

Or directly using `unit_tests`:
```
$ cd build 
$ ./bin/Debug/unit_tests.exe

[==========] Running 4 tests from 1 test suite.
[----------] Global test environment set-up.
[----------] 4 tests from example
[ RUN      ] example.add
[       OK ] example.add (0 ms)
[ RUN      ] example.c_add
[       OK ] example.c_add (0 ms)
[ RUN      ] example.subtract
[       OK ] example.subtract (0 ms)
[ RUN      ] example.c_subtract
[       OK ] example.c_subtract (0 ms)
[----------] 4 tests from example (0 ms total)

[----------] Global test environment tear-down
[==========] 4 tests from 1 test suite ran. (1 ms total)
[  PASSED  ] 4 tests.
```


## Acknowledgments

- Container Travis setup thanks to [Joan Massich](https://github.com/massich).
- Clean-up in CMake code thanks to [Claus Klein](https://github.com/ClausKlein).
- Clean-up and GitHub Actions workflow: [Roberto Di Remigio](https://github.com/robertodr).
