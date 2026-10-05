#include "bench/fib.hpp"

// RE Benchmark TU 17857 of 20000 (depth=28, stamp="default")
namespace bench_tu_17857 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17857>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17857
