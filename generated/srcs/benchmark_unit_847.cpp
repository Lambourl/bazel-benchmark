#include "bench/fib.hpp"

// RE Benchmark TU 847 of 20000 (depth=28, stamp="default")
namespace bench_tu_847 {
constexpr unsigned long long result = ::bench::slow_fib<28, 847>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_847
