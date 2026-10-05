#include "bench/fib.hpp"

// RE Benchmark TU 12828 of 20000 (depth=28, stamp="default")
namespace bench_tu_12828 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12828>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12828
