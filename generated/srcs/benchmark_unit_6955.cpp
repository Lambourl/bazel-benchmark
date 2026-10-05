#include "bench/fib.hpp"

// RE Benchmark TU 6955 of 20000 (depth=28, stamp="default")
namespace bench_tu_6955 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6955>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6955
