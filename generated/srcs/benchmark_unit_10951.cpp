#include "bench/fib.hpp"

// RE Benchmark TU 10951 of 20000 (depth=28, stamp="default")
namespace bench_tu_10951 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10951>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10951
