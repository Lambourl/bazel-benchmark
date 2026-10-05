#include "bench/fib.hpp"

// RE Benchmark TU 5987 of 20000 (depth=28, stamp="default")
namespace bench_tu_5987 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5987>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5987
