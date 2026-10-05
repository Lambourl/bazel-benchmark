#include "bench/fib.hpp"

// RE Benchmark TU 19096 of 20000 (depth=28, stamp="default")
namespace bench_tu_19096 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19096>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19096
