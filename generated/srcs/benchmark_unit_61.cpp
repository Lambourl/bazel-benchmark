#include "bench/fib.hpp"

// RE Benchmark TU 61 of 20000 (depth=28, stamp="default")
namespace bench_tu_61 {
constexpr unsigned long long result = ::bench::slow_fib<28, 61>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_61
