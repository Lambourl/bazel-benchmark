#include "bench/fib.hpp"

// RE Benchmark TU 2137 of 20000 (depth=28, stamp="default")
namespace bench_tu_2137 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2137>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2137
