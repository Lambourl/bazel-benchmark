#include "bench/fib.hpp"

// RE Benchmark TU 785 of 20000 (depth=28, stamp="default")
namespace bench_tu_785 {
constexpr unsigned long long result = ::bench::slow_fib<28, 785>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_785
