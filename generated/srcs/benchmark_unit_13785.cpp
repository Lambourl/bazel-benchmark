#include "bench/fib.hpp"

// RE Benchmark TU 13785 of 20000 (depth=28, stamp="default")
namespace bench_tu_13785 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13785>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13785
