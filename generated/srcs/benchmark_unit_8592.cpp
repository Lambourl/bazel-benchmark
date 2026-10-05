#include "bench/fib.hpp"

// RE Benchmark TU 8592 of 20000 (depth=28, stamp="default")
namespace bench_tu_8592 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8592>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8592
