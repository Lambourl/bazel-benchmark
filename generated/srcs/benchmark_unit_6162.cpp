#include "bench/fib.hpp"

// RE Benchmark TU 6162 of 20000 (depth=28, stamp="default")
namespace bench_tu_6162 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6162>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6162
