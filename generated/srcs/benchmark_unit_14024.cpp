#include "bench/fib.hpp"

// RE Benchmark TU 14024 of 20000 (depth=28, stamp="default")
namespace bench_tu_14024 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14024>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14024
