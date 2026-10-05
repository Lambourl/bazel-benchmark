#include "bench/fib.hpp"

// RE Benchmark TU 10586 of 20000 (depth=28, stamp="default")
namespace bench_tu_10586 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10586>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10586
