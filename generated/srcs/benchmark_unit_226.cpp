#include "bench/fib.hpp"

// RE Benchmark TU 226 of 20000 (depth=28, stamp="default")
namespace bench_tu_226 {
constexpr unsigned long long result = ::bench::slow_fib<28, 226>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_226
