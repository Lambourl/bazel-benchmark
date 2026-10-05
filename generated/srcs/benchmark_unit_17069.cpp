#include "bench/fib.hpp"

// RE Benchmark TU 17069 of 20000 (depth=28, stamp="default")
namespace bench_tu_17069 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17069>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17069
