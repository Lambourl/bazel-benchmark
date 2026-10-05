#include "bench/fib.hpp"

// RE Benchmark TU 13847 of 20000 (depth=28, stamp="default")
namespace bench_tu_13847 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13847>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13847
