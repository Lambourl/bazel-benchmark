#include "bench/fib.hpp"

// RE Benchmark TU 18160 of 20000 (depth=28, stamp="default")
namespace bench_tu_18160 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18160>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18160
