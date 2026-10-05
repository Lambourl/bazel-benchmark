#include "bench/fib.hpp"

// RE Benchmark TU 987 of 20000 (depth=28, stamp="default")
namespace bench_tu_987 {
constexpr unsigned long long result = ::bench::slow_fib<28, 987>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_987
