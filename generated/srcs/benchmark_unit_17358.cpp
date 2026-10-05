#include "bench/fib.hpp"

// RE Benchmark TU 17358 of 20000 (depth=28, stamp="default")
namespace bench_tu_17358 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17358>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17358
