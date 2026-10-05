#include "bench/fib.hpp"

// RE Benchmark TU 11872 of 20000 (depth=28, stamp="default")
namespace bench_tu_11872 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11872>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11872
