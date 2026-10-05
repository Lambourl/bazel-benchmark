#include "bench/fib.hpp"

// RE Benchmark TU 8959 of 20000 (depth=28, stamp="default")
namespace bench_tu_8959 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8959>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8959
