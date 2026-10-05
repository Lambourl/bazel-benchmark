#include "bench/fib.hpp"

// RE Benchmark TU 460 of 20000 (depth=28, stamp="default")
namespace bench_tu_460 {
constexpr unsigned long long result = ::bench::slow_fib<28, 460>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_460
