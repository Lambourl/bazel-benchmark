#include "bench/fib.hpp"

// RE Benchmark TU 14094 of 20000 (depth=28, stamp="default")
namespace bench_tu_14094 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14094>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14094
