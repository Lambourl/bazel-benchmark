#include "bench/fib.hpp"

// RE Benchmark TU 4582 of 20000 (depth=28, stamp="default")
namespace bench_tu_4582 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4582>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4582
