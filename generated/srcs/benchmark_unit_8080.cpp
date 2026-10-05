#include "bench/fib.hpp"

// RE Benchmark TU 8080 of 20000 (depth=28, stamp="default")
namespace bench_tu_8080 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8080>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8080
