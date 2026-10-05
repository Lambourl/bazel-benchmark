#include "bench/fib.hpp"

// RE Benchmark TU 1069 of 20000 (depth=28, stamp="default")
namespace bench_tu_1069 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1069>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1069
