#include "bench/fib.hpp"

// RE Benchmark TU 5658 of 20000 (depth=28, stamp="default")
namespace bench_tu_5658 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5658>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5658
