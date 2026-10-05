#include "bench/fib.hpp"

// RE Benchmark TU 1337 of 20000 (depth=28, stamp="default")
namespace bench_tu_1337 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1337>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1337
