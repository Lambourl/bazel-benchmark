#include "bench/fib.hpp"

// RE Benchmark TU 881 of 20000 (depth=28, stamp="default")
namespace bench_tu_881 {
constexpr unsigned long long result = ::bench::slow_fib<28, 881>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_881
