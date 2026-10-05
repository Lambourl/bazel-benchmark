#include "bench/fib.hpp"

// RE Benchmark TU 19026 of 20000 (depth=28, stamp="default")
namespace bench_tu_19026 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19026>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19026
