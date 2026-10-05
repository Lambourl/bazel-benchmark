#include "bench/fib.hpp"

// RE Benchmark TU 2255 of 20000 (depth=28, stamp="default")
namespace bench_tu_2255 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2255>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2255
