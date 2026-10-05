#include "bench/fib.hpp"

// RE Benchmark TU 15829 of 20000 (depth=28, stamp="default")
namespace bench_tu_15829 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15829>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15829
