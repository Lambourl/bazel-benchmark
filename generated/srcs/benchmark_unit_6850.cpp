#include "bench/fib.hpp"

// RE Benchmark TU 6850 of 20000 (depth=28, stamp="default")
namespace bench_tu_6850 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6850>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6850
