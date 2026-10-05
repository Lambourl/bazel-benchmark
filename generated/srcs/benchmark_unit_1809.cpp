#include "bench/fib.hpp"

// RE Benchmark TU 1809 of 20000 (depth=28, stamp="default")
namespace bench_tu_1809 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1809>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1809
