#include "bench/fib.hpp"

// RE Benchmark TU 141 of 20000 (depth=28, stamp="default")
namespace bench_tu_141 {
constexpr unsigned long long result = ::bench::slow_fib<28, 141>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_141
