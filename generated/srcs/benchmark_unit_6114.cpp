#include "bench/fib.hpp"

// RE Benchmark TU 6114 of 20000 (depth=28, stamp="default")
namespace bench_tu_6114 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6114>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6114
