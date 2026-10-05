#include "bench/fib.hpp"

// RE Benchmark TU 11987 of 20000 (depth=28, stamp="default")
namespace bench_tu_11987 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11987>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11987
