#include "bench/fib.hpp"

// RE Benchmark TU 13097 of 20000 (depth=28, stamp="default")
namespace bench_tu_13097 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13097>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13097
