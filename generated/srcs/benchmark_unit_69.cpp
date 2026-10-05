#include "bench/fib.hpp"

// RE Benchmark TU 69 of 20000 (depth=28, stamp="default")
namespace bench_tu_69 {
constexpr unsigned long long result = ::bench::slow_fib<28, 69>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_69
