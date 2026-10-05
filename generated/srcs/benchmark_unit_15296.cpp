#include "bench/fib.hpp"

// RE Benchmark TU 15296 of 20000 (depth=28, stamp="default")
namespace bench_tu_15296 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15296>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15296
