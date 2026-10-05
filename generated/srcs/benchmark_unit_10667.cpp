#include "bench/fib.hpp"

// RE Benchmark TU 10667 of 20000 (depth=28, stamp="default")
namespace bench_tu_10667 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10667>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10667
