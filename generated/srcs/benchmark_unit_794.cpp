#include "bench/fib.hpp"

// RE Benchmark TU 794 of 20000 (depth=28, stamp="default")
namespace bench_tu_794 {
constexpr unsigned long long result = ::bench::slow_fib<28, 794>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_794
