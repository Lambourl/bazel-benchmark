#include "bench/fib.hpp"

// RE Benchmark TU 10588 of 20000 (depth=28, stamp="default")
namespace bench_tu_10588 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10588>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10588
