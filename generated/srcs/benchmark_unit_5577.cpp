#include "bench/fib.hpp"

// RE Benchmark TU 5577 of 20000 (depth=28, stamp="default")
namespace bench_tu_5577 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5577>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5577
