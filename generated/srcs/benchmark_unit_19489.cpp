#include "bench/fib.hpp"

// RE Benchmark TU 19489 of 20000 (depth=28, stamp="default")
namespace bench_tu_19489 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19489>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19489
