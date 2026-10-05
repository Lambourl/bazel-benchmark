#include "bench/fib.hpp"

// RE Benchmark TU 5058 of 20000 (depth=28, stamp="default")
namespace bench_tu_5058 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5058>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5058
