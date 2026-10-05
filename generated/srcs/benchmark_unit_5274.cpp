#include "bench/fib.hpp"

// RE Benchmark TU 5274 of 20000 (depth=28, stamp="default")
namespace bench_tu_5274 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5274>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5274
