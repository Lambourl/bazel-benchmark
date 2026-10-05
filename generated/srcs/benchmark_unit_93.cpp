#include "bench/fib.hpp"

// RE Benchmark TU 93 of 20000 (depth=28, stamp="default")
namespace bench_tu_93 {
constexpr unsigned long long result = ::bench::slow_fib<28, 93>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_93
