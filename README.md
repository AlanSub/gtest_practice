# Google Test Practice
GoogleTest is Google’s C++ testing and mocking framework.  
Here are some Google Test framework exercises following Official User Guide and some resources on internet.

## tdd_led_driver
A exercise in book "Test-Driven Development for Embedded C".  
This is a Googletest version which from [jgade-code-googletest-version](https://github.com/y-philly/jgade-code-googletest-version)  

Use run.sh to execute the test
```
$ ./run.sh 
-- The C compiler identification is GNU 11.4.0
-- The CXX compiler identification is GNU 11.4.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: /usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Found Python: /usr/bin/python3.10 (found version "3.10.12") found components: Interpreter 
-- Looking for pthread.h
-- Looking for pthread.h - found
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD - Success
-- Found Threads: TRUE  
-- Configuring done
-- Generating done
-- Build files have been written to: /home/alan/gtest_practice/tdd_led_driver/build
[  8%] Building CXX object _deps/googletest-build/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o
[ 16%] Linking CXX static library ../../../lib/libgtest.a
[ 16%] Built target gtest
[ 25%] Building CXX object _deps/googletest-build/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o
[ 33%] Linking CXX static library ../../../lib/libgtest_main.a
[ 33%] Built target gtest_main
[ 41%] Building CXX object _deps/googletest-build/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o
[ 50%] Linking CXX static library ../../../lib/libgmock.a
[ 50%] Built target gmock
[ 58%] Building CXX object _deps/googletest-build/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o
[ 66%] Linking CXX static library ../../../lib/libgmock_main.a
[ 66%] Built target gmock_main
[ 75%] Building CXX object CMakeFiles/led_driver_test.dir/src/LedDriver.cc.o
[ 83%] Building CXX object CMakeFiles/led_driver_test.dir/test/LedDriverTest.cc.o
[ 91%] Building CXX object CMakeFiles/led_driver_test.dir/test/MockRuntimeError.cc.o
[100%] Linking CXX executable led_driver_test
[100%] Built target led_driver_test
Test project /home/alan/gtest_practice/tdd_led_driver/build
      Start  1: create.leds_are_off
 1/21 Test  #1: create.leds_are_off ..................................................................   Passed    0.00 sec
      Start  2: all_leds_turn_off.TurnOn_turns_on_one_led
 2/21 Test  #2: all_leds_turn_off.TurnOn_turns_on_one_led ............................................   Passed    0.00 sec
      Start  3: all_leds_turn_off.turn_off_led_one
 3/21 Test  #3: all_leds_turn_off.turn_off_led_one ...................................................   Passed    0.00 sec
      Start  4: all_leds_turn_off.TurnOn_turns_on_multiple_leds
 4/21 Test  #4: all_leds_turn_off.TurnOn_turns_on_multiple_leds ......................................   Passed    0.00 sec
      Start  5: all_leds_turn_off.TurnOff_turns_off_any_led
 5/21 Test  #5: all_leds_turn_off.TurnOff_turns_off_any_led ..........................................   Passed    0.00 sec
      Start  6: all_leds_turn_off.led_memory_is_not_readable
 6/21 Test  #6: all_leds_turn_off.led_memory_is_not_readable .........................................   Passed    0.01 sec
      Start  7: all_leds_turn_off.TurnOn_turns_on_upper_and_lower_bounds_leds
 7/21 Test  #7: all_leds_turn_off.TurnOn_turns_on_upper_and_lower_bounds_leds ........................   Passed    0.00 sec
      Start  8: all_leds_turn_off.IsOn_returns_current_on_state
 8/21 Test  #8: all_leds_turn_off.IsOn_returns_current_on_state ......................................   Passed    0.00 sec
      Start  9: all_leds_turn_off.IsOff_returns_current_off_state
 9/21 Test  #9: all_leds_turn_off.IsOff_returns_current_off_state ....................................   Passed    0.00 sec
      Start 10: all_leds_turn_off.TurnAllOn_turns_on_all_leds
10/21 Test #10: all_leds_turn_off.TurnAllOn_turns_on_all_leds ........................................   Passed    0.00 sec
      Start 11: all_leds_turn_off.TurnAllOff_turns_off_all_leds
11/21 Test #11: all_leds_turn_off.TurnAllOff_turns_off_all_leds ......................................   Passed    0.00 sec
      Start 12: all_leds_turn_off.TurnOn_produces_runtime_error_when_ledNumber_out_of_bounds
12/21 Test #12: all_leds_turn_off.TurnOn_produces_runtime_error_when_ledNumber_out_of_bounds .........   Passed    0.00 sec
      Start 13: all_leds_turn_off.leds_are_always_off_when_ledNumber_out_of_bounds
13/21 Test #13: all_leds_turn_off.leds_are_always_off_when_ledNumber_out_of_bounds ...................   Passed    0.00 sec
      Start 14: aPatternInstance/arg_pattern_test_when_all_leds_turn_off.TurnOn_does_no_harm/-1
14/21 Test #14: aPatternInstance/arg_pattern_test_when_all_leds_turn_off.TurnOn_does_no_harm/-1 ......   Passed    0.00 sec
      Start 15: aPatternInstance/arg_pattern_test_when_all_leds_turn_off.TurnOn_does_no_harm/0
15/21 Test #15: aPatternInstance/arg_pattern_test_when_all_leds_turn_off.TurnOn_does_no_harm/0 .......   Passed    0.00 sec
      Start 16: aPatternInstance/arg_pattern_test_when_all_leds_turn_off.TurnOn_does_no_harm/17
16/21 Test #16: aPatternInstance/arg_pattern_test_when_all_leds_turn_off.TurnOn_does_no_harm/17 ......   Passed    0.00 sec
      Start 17: aPatternInstance/arg_pattern_test_when_all_leds_turn_off.TurnOn_does_no_harm/3141
17/21 Test #17: aPatternInstance/arg_pattern_test_when_all_leds_turn_off.TurnOn_does_no_harm/3141 ....   Passed    0.00 sec
      Start 18: aPatternInstance/arg_pattern_test_when_all_leds_turn_off.TurnOff_does_no_harm/-1
18/21 Test #18: aPatternInstance/arg_pattern_test_when_all_leds_turn_off.TurnOff_does_no_harm/-1 .....   Passed    0.00 sec
      Start 19: aPatternInstance/arg_pattern_test_when_all_leds_turn_off.TurnOff_does_no_harm/0
19/21 Test #19: aPatternInstance/arg_pattern_test_when_all_leds_turn_off.TurnOff_does_no_harm/0 ......   Passed    0.00 sec
      Start 20: aPatternInstance/arg_pattern_test_when_all_leds_turn_off.TurnOff_does_no_harm/17
20/21 Test #20: aPatternInstance/arg_pattern_test_when_all_leds_turn_off.TurnOff_does_no_harm/17 .....   Passed    0.00 sec
      Start 21: aPatternInstance/arg_pattern_test_when_all_leds_turn_off.TurnOff_does_no_harm/3141
21/21 Test #21: aPatternInstance/arg_pattern_test_when_all_leds_turn_off.TurnOff_does_no_harm/3141 ...   Passed    0.00 sec
100% tests passed, 0 tests failed out of 21
Total Test time (real) =   0.07 sec
```
Reference : [jgade-code-googletest-version](https://github.com/y-philly/jgade-code-googletest-version)

## sample_1
Shows the basic steps of using googletest to test C++ functions.  
Use run.sh to execute the test
```
$ ./run.sh 
-- The C compiler identification is GNU 11.4.0
-- The CXX compiler identification is GNU 11.4.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: /usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Found Python: /usr/bin/python3.10 (found version "3.10.12") found components: Interpreter 
-- Looking for pthread.h
-- Looking for pthread.h - found
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD - Success
-- Found Threads: TRUE  
-- Configuring done
-- Generating done
-- Build files have been written to: /home/alan/gtest_practice/sample_1/build
[  9%] Building CXX object _deps/googletest-build/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o
[ 18%] Linking CXX static library ../../../lib/libgtest.a
[ 18%] Built target gtest
[ 27%] Building CXX object _deps/googletest-build/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o
[ 36%] Linking CXX static library ../../../lib/libgtest_main.a
[ 36%] Built target gtest_main
[ 45%] Building CXX object CMakeFiles/sample1_unittest.dir/sample1_unittest.cc.o
[ 54%] Building CXX object CMakeFiles/sample1_unittest.dir/sample1.cc.o
[ 63%] Linking CXX executable sample1_unittest
[ 63%] Built target sample1_unittest
[ 72%] Building CXX object _deps/googletest-build/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o
[ 81%] Linking CXX static library ../../../lib/libgmock.a
[ 81%] Built target gmock
[ 90%] Building CXX object _deps/googletest-build/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o
[100%] Linking CXX static library ../../../lib/libgmock_main.a
[100%] Built target gmock_main
Test project /home/alan/gtest_practice/sample_1/build
    Start 1: FactorialTest.Negative
1/6 Test #1: FactorialTest.Negative ...........   Passed    0.00 sec
    Start 2: FactorialTest.Zero
2/6 Test #2: FactorialTest.Zero ...............   Passed    0.00 sec
    Start 3: FactorialTest.Positive
3/6 Test #3: FactorialTest.Positive ...........   Passed    0.00 sec
    Start 4: IsPrimeTest.Negative
4/6 Test #4: IsPrimeTest.Negative .............   Passed    0.00 sec
    Start 5: IsPrimeTest.Trivial
5/6 Test #5: IsPrimeTest.Trivial ..............   Passed    0.00 sec
    Start 6: IsPrimeTest.Positive
6/6 Test #6: IsPrimeTest.Positive .............   Passed    0.00 sec
100% tests passed, 0 tests failed out of 6
Total Test time (real) =   0.02 sec
```

Reference : [GoogleTest User’s Guide](https://google.github.io/googletest/)

## sample_2
Shows a more complex unit test for a class with multiple member functions.  
Use run.sh to execute the test
```
$ ./run.sh 
-- The C compiler identification is GNU 11.4.0
-- The CXX compiler identification is GNU 11.4.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: /usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Found Python: /usr/bin/python3.10 (found version "3.10.12") found components: Interpreter 
-- Looking for pthread.h
-- Looking for pthread.h - found
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD - Success
-- Found Threads: TRUE  
-- Configuring done
-- Generating done
-- Build files have been written to: /home/alan/gtest_practice/sample_2/build
[  9%] Building CXX object _deps/googletest-build/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o
[ 18%] Linking CXX static library ../../../lib/libgtest.a
[ 18%] Built target gtest
[ 27%] Building CXX object _deps/googletest-build/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o
[ 36%] Linking CXX static library ../../../lib/libgtest_main.a
[ 36%] Built target gtest_main
[ 45%] Building CXX object CMakeFiles/sample2_unittest.dir/sample2_unittest.cc.o
[ 54%] Building CXX object CMakeFiles/sample2_unittest.dir/sample2.cc.o
[ 63%] Linking CXX executable sample2_unittest
[ 63%] Built target sample2_unittest
[ 72%] Building CXX object _deps/googletest-build/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o
[ 81%] Linking CXX static library ../../../lib/libgmock.a
[ 81%] Built target gmock
[ 90%] Building CXX object _deps/googletest-build/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o
[100%] Linking CXX static library ../../../lib/libgmock_main.a
[100%] Built target gmock_main
Test project /home/alan/gtest_practice/sample_2/build
    Start 1: MyString.DefaultConstructor
1/4 Test #1: MyString.DefaultConstructor .......   Passed    0.00 sec
    Start 2: MyString.ConstructorFromCString
2/4 Test #2: MyString.ConstructorFromCString ...   Passed    0.01 sec
    Start 3: MyString.CopyConstructor
3/4 Test #3: MyString.CopyConstructor ..........   Passed    0.00 sec
    Start 4: MyString.Set
4/4 Test #4: MyString.Set ......................   Passed    0.00 sec
100% tests passed, 0 tests failed out of 4
Total Test time (real) =   0.02 sec
```
Reference : [GoogleTest User’s Guide](https://google.github.io/googletest/)

## sample_3
Uses a test fixture.  
Use run.sh to execute the test
```
$ ./run.sh
-- The C compiler identification is GNU 11.4.0
-- The CXX compiler identification is GNU 11.4.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: /usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Found Python: /usr/bin/python3.10 (found version "3.10.12") found components: Interpreter 
-- Looking for pthread.h
-- Looking for pthread.h - found
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD - Success
-- Found Threads: TRUE  
-- Configuring done
-- Generating done
-- Build files have been written to: /home/alan/gtest_practice/sample_3/build
[ 10%] Building CXX object _deps/googletest-build/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o
[ 20%] Linking CXX static library ../../../lib/libgtest.a
[ 20%] Built target gtest
[ 30%] Building CXX object _deps/googletest-build/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o
[ 40%] Linking CXX static library ../../../lib/libgtest_main.a
[ 40%] Built target gtest_main
[ 50%] Building CXX object CMakeFiles/sample3_unittest.dir/sample3_unittest.cc.o
[ 60%] Linking CXX executable sample3_unittest
[ 60%] Built target sample3_unittest
[ 70%] Building CXX object _deps/googletest-build/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o
[ 80%] Linking CXX static library ../../../lib/libgmock.a
[ 80%] Built target gmock
[ 90%] Building CXX object _deps/googletest-build/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o
[100%] Linking CXX static library ../../../lib/libgmock_main.a
[100%] Built target gmock_main
Test project /home/alan/gtest_practice/sample_3/build
    Start 1: QueueTestSmpl3.DefaultConstructor
1/3 Test #1: QueueTestSmpl3.DefaultConstructor ...   Passed    0.00 sec
    Start 2: QueueTestSmpl3.Dequeue
2/3 Test #2: QueueTestSmpl3.Dequeue ..............   Passed    0.00 sec
    Start 3: QueueTestSmpl3.Map
3/3 Test #3: QueueTestSmpl3.Map ..................   Passed    0.00 sec
100% tests passed, 0 tests failed out of 3
Total Test time (real) =   0.01 sec
```
Reference : [GoogleTest User’s Guide](https://google.github.io/googletest/)

## sample_4
Use googletest and googletest.h together to get the best of both libraries.  
Use run.sh to execute the test
```
$ ./run.sh 
-- The C compiler identification is GNU 11.4.0
-- The CXX compiler identification is GNU 11.4.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: /usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Found Python: /usr/bin/python3.10 (found version "3.10.12") found components: Interpreter 
-- Looking for pthread.h
-- Looking for pthread.h - found
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD - Success
-- Found Threads: TRUE  
-- Configuring done
-- Generating done
-- Build files have been written to: /home/alan/gtest_practice/sample_4/build
[  9%] Building CXX object _deps/googletest-build/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o
[ 18%] Linking CXX static library ../../../lib/libgtest.a
[ 18%] Built target gtest
[ 27%] Building CXX object _deps/googletest-build/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o
[ 36%] Linking CXX static library ../../../lib/libgtest_main.a
[ 36%] Built target gtest_main
[ 45%] Building CXX object CMakeFiles/sample4_unittest.dir/sample4_unittest.cc.o
[ 54%] Building CXX object CMakeFiles/sample4_unittest.dir/sample4.cc.o
[ 63%] Linking CXX executable sample4_unittest
[ 63%] Built target sample4_unittest
[ 72%] Building CXX object _deps/googletest-build/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o
[ 81%] Linking CXX static library ../../../lib/libgmock.a
[ 81%] Built target gmock
[ 90%] Building CXX object _deps/googletest-build/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o
[100%] Linking CXX static library ../../../lib/libgmock_main.a
[100%] Built target gmock_main
Test project /home/alan/gtest_practice/sample_4/build
    Start 1: Counter.Increment
1/1 Test #1: Counter.Increment ................   Passed    0.00 sec
100% tests passed, 0 tests failed out of 1
Total Test time (real) =   0.00 sec
```
Reference : [GoogleTest User’s Guide](https://google.github.io/googletest/)

## sample_5
Puts shared testing logic in a base test fixture, and reuses it in derived fixtures.  
Use run.sh to execute the test
```
$ ./run.sh 
-- The C compiler identification is GNU 11.4.0
-- The CXX compiler identification is GNU 11.4.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: /usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Found Python: /usr/bin/python3.10 (found version "3.10.12") found components: Interpreter 
-- Looking for pthread.h
-- Looking for pthread.h - found
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD - Success
-- Found Threads: TRUE  
-- Configuring done
-- Generating done
-- Build files have been written to: /home/alan/gtest_practice/sample_5/build
[  9%] Building CXX object _deps/googletest-build/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o
[ 18%] Linking CXX static library ../../../lib/libgtest.a
[ 18%] Built target gtest
[ 27%] Building CXX object _deps/googletest-build/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o
[ 36%] Linking CXX static library ../../../lib/libgtest_main.a
[ 36%] Built target gtest_main
[ 45%] Building CXX object CMakeFiles/sample5_unittest.dir/sample5_unittest.cc.o
[ 54%] Building CXX object CMakeFiles/sample5_unittest.dir/sample1.cc.o
[ 63%] Linking CXX executable sample5_unittest
[ 63%] Built target sample5_unittest
[ 72%] Building CXX object _deps/googletest-build/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o
[ 81%] Linking CXX static library ../../../lib/libgmock.a
[ 81%] Built target gmock
[ 90%] Building CXX object _deps/googletest-build/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o
[100%] Linking CXX static library ../../../lib/libgmock_main.a
[100%] Built target gmock_main
Test project /home/alan/gtest_practice/sample_5/build
    Start 1: IntegerFunctionTest.Factorial
1/4 Test #1: IntegerFunctionTest.Factorial ....   Passed    0.00 sec
    Start 2: IntegerFunctionTest.IsPrime
2/4 Test #2: IntegerFunctionTest.IsPrime ......   Passed    0.01 sec
    Start 3: QueueTest.DefaultConstructor
3/4 Test #3: QueueTest.DefaultConstructor .....   Passed    0.00 sec
    Start 4: QueueTest.Dequeue
4/4 Test #4: QueueTest.Dequeue ................   Passed    0.00 sec
100% tests passed, 0 tests failed out of 4
Total Test time (real) =   0.02 sec
```
Reference : [GoogleTest User’s Guide](https://google.github.io/googletest/)

## gtest_on_embedded_c/queue
This is a practice refer to [this youtube vedio](https://www.youtube.com/watch?v=1ttnkyMDFic)  
Use run.sh to execute the test

```
$ ./run.sh 
CMake Deprecation Warning at CMakeLists.txt:1 (cmake_minimum_required):
  Compatibility with CMake < 2.8.12 will be removed from a future version of
  CMake.
  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
-- The C compiler identification is GNU 11.4.0
-- The CXX compiler identification is GNU 11.4.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: /usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
CMAKE_CXX_FLAGS is -Wall -std=c++11 -pthread
CMAKE_CXX_FLAGS_DEBUG is -g
CMAKE_CXX_FLAGS_RELEASE is -O3 -DNDEBUG
-- Configuring done
-- Generating done
-- Build files have been written to: /home/alan/gtest_practice/gtest_on_embedded_c/queue/build
[ 50%] Building CXX object CMakeFiles/circular-buffer-test.dir/src/main.cpp.o
[100%] Linking CXX executable circular-buffer-test
[100%] Built target circular-buffer-test
[==========] Running 2 tests from 1 test suite.
[----------] Global test environment set-up.
[----------] 2 tests from queueFixtureTest
[ RUN      ] queueFixtureTest.reset_test
[       OK ] queueFixtureTest.reset_test (0 ms)
[ RUN      ] queueFixtureTest.fill_and_count_test
[       OK ] queueFixtureTest.fill_and_count_test (0 ms)
[----------] 2 tests from queueFixtureTest (0 ms total)
[----------] Global test environment tear-down
[==========] 2 tests from 1 test suite ran. (0 ms total)
[  PASSED  ] 2 tests.
```
Reference : [gTest and gMock Apply on C code](https://www.youtube.com/watch?v=1ttnkyMDFic)

## quick_start_cmake
Get start and running with GoogleTest using CMake

```
$ cmake -S . -B build
-- The C compiler identification is GNU 11.4.0
-- The CXX compiler identification is GNU 11.4.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: /usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Found Python: /usr/bin/python3.10 (found version "3.10.12") found components: Interpreter 
-- Looking for pthread.h
-- Looking for pthread.h - found
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD - Success
-- Found Threads: TRUE  
-- Configuring done
-- Generating done
-- Build files have been written to: /home/alan/gtest_practice/quick_start_cmake/build
$ cmake --build build
[ 10%] Building CXX object _deps/googletest-build/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o
[ 20%] Linking CXX static library ../../../lib/libgtest.a
[ 20%] Built target gtest
[ 30%] Building CXX object _deps/googletest-build/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o
[ 40%] Linking CXX static library ../../../lib/libgtest_main.a
[ 40%] Built target gtest_main
[ 50%] Building CXX object CMakeFiles/hello_test.dir/hello_test.cc.o
[ 60%] Linking CXX executable hello_test
[ 60%] Built target hello_test
[ 70%] Building CXX object _deps/googletest-build/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o
[ 80%] Linking CXX static library ../../../lib/libgmock.a
[ 80%] Built target gmock
[ 90%] Building CXX object _deps/googletest-build/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o
[100%] Linking CXX static library ../../../lib/libgmock_main.a
[100%] Built target gmock_main

$ cd build && ctest
Test project /home/alan/gtest_practice/quick_start_cmake/build
    Start 1: HelloTest.BasicAssertions
1/1 Test #1: HelloTest.BasicAssertions ........   Passed    0.00 sec

100% tests passed, 0 tests failed out of 1
Total Test time (real) =   0.00 sec

Reference : [GoogleTest User’s Guide](https://google.github.io/googletest/)
```

## quick_start_bazel
Get start and running with GoogleTest using the Bazel build system  
Reference : [Quickstart: Building with Bazel](https://google.github.io/googletest/quickstart-bazel.html)



