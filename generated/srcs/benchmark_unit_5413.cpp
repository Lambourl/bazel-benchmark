#include "bench/fib.hpp"

// RE Benchmark TU 5413 of 20000 (depth=28, stamp="default")
namespace bench_tu_5413 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5413>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5413
