#include "bench/fib.hpp"

// RE Benchmark TU 66 of 20000 (depth=28, stamp="default")
namespace bench_tu_66 {
constexpr unsigned long long result = ::bench::slow_fib<28, 66>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_66
