#include "bench/fib.hpp"

// RE Benchmark TU 2361 of 20000 (depth=28, stamp="default")
namespace bench_tu_2361 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2361>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2361
