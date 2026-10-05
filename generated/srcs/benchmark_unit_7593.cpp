#include "bench/fib.hpp"

// RE Benchmark TU 7593 of 20000 (depth=28, stamp="default")
namespace bench_tu_7593 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7593>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7593
