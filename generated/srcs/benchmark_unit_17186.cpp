#include "bench/fib.hpp"

// RE Benchmark TU 17186 of 20000 (depth=28, stamp="default")
namespace bench_tu_17186 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17186>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17186
