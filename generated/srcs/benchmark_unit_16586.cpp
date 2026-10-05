#include "bench/fib.hpp"

// RE Benchmark TU 16586 of 20000 (depth=28, stamp="default")
namespace bench_tu_16586 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16586>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16586
