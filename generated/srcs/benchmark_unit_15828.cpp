#include "bench/fib.hpp"

// RE Benchmark TU 15828 of 20000 (depth=28, stamp="default")
namespace bench_tu_15828 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15828>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15828
