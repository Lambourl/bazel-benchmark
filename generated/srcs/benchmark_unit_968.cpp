#include "bench/fib.hpp"

// RE Benchmark TU 968 of 20000 (depth=28, stamp="default")
namespace bench_tu_968 {
constexpr unsigned long long result = ::bench::slow_fib<28, 968>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_968
