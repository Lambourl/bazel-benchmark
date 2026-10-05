#include "bench/fib.hpp"

// RE Benchmark TU 19876 of 20000 (depth=28, stamp="default")
namespace bench_tu_19876 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19876>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19876
