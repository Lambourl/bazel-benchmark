#include "bench/fib.hpp"

// RE Benchmark TU 58 of 20000 (depth=28, stamp="default")
namespace bench_tu_58 {
constexpr unsigned long long result = ::bench::slow_fib<28, 58>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_58
