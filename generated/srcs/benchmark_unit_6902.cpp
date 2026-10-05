#include "bench/fib.hpp"

// RE Benchmark TU 6902 of 20000 (depth=28, stamp="default")
namespace bench_tu_6902 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6902>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6902
