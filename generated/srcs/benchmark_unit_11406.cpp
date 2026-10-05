#include "bench/fib.hpp"

// RE Benchmark TU 11406 of 20000 (depth=28, stamp="default")
namespace bench_tu_11406 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11406>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11406
