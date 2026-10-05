#include "bench/fib.hpp"

// RE Benchmark TU 3003 of 20000 (depth=28, stamp="default")
namespace bench_tu_3003 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3003>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3003
