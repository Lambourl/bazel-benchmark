#include "bench/fib.hpp"

// RE Benchmark TU 5785 of 20000 (depth=28, stamp="default")
namespace bench_tu_5785 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5785>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5785
