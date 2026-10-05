#include "bench/fib.hpp"

// RE Benchmark TU 5855 of 20000 (depth=28, stamp="default")
namespace bench_tu_5855 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5855>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5855
