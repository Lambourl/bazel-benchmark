#include "bench/fib.hpp"

// RE Benchmark TU 14928 of 20000 (depth=28, stamp="default")
namespace bench_tu_14928 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14928>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14928
