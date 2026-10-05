#include "bench/fib.hpp"

// RE Benchmark TU 15648 of 20000 (depth=28, stamp="default")
namespace bench_tu_15648 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15648>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15648
