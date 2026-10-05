#include "bench/fib.hpp"

// RE Benchmark TU 6580 of 20000 (depth=28, stamp="default")
namespace bench_tu_6580 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6580>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6580
