#include "bench/fib.hpp"

// RE Benchmark TU 19331 of 20000 (depth=28, stamp="default")
namespace bench_tu_19331 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19331>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19331
