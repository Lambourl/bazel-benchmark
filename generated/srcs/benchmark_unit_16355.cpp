#include "bench/fib.hpp"

// RE Benchmark TU 16355 of 20000 (depth=28, stamp="default")
namespace bench_tu_16355 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16355>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16355
