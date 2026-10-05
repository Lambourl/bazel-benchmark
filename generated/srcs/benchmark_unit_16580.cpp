#include "bench/fib.hpp"

// RE Benchmark TU 16580 of 20000 (depth=28, stamp="default")
namespace bench_tu_16580 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16580>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16580
