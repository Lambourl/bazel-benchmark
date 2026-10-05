#include "bench/fib.hpp"

// RE Benchmark TU 588 of 20000 (depth=28, stamp="default")
namespace bench_tu_588 {
constexpr unsigned long long result = ::bench::slow_fib<28, 588>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_588
