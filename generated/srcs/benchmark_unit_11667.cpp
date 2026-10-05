#include "bench/fib.hpp"

// RE Benchmark TU 11667 of 20000 (depth=28, stamp="default")
namespace bench_tu_11667 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11667>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11667
