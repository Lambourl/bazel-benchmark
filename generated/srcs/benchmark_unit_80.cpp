#include "bench/fib.hpp"

// RE Benchmark TU 80 of 20000 (depth=28, stamp="default")
namespace bench_tu_80 {
constexpr unsigned long long result = ::bench::slow_fib<28, 80>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_80
