#include "bench/fib.hpp"

// RE Benchmark TU 8456 of 20000 (depth=28, stamp="default")
namespace bench_tu_8456 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8456>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8456
