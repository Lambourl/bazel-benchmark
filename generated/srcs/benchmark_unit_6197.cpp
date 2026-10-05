#include "bench/fib.hpp"

// RE Benchmark TU 6197 of 20000 (depth=28, stamp="default")
namespace bench_tu_6197 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6197>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6197
