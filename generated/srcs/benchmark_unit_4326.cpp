#include "bench/fib.hpp"

// RE Benchmark TU 4326 of 20000 (depth=28, stamp="default")
namespace bench_tu_4326 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4326>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4326
