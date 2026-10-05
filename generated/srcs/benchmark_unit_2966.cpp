#include "bench/fib.hpp"

// RE Benchmark TU 2966 of 20000 (depth=28, stamp="default")
namespace bench_tu_2966 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2966>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2966
