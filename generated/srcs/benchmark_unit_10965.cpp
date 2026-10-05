#include "bench/fib.hpp"

// RE Benchmark TU 10965 of 20000 (depth=28, stamp="default")
namespace bench_tu_10965 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10965>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10965
