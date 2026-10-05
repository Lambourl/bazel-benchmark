#include "bench/fib.hpp"

// RE Benchmark TU 5284 of 20000 (depth=28, stamp="default")
namespace bench_tu_5284 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5284>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5284
