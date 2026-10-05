#include "bench/fib.hpp"

// RE Benchmark TU 14586 of 20000 (depth=28, stamp="default")
namespace bench_tu_14586 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14586>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14586
