#include "bench/fib.hpp"

// RE Benchmark TU 3827 of 20000 (depth=28, stamp="default")
namespace bench_tu_3827 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3827>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3827
