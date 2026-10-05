#include "bench/fib.hpp"

// RE Benchmark TU 3785 of 20000 (depth=28, stamp="default")
namespace bench_tu_3785 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3785>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3785
