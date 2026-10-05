#include "bench/fib.hpp"

// RE Benchmark TU 15546 of 20000 (depth=28, stamp="default")
namespace bench_tu_15546 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15546>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15546
