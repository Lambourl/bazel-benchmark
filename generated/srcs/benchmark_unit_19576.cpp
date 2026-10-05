#include "bench/fib.hpp"

// RE Benchmark TU 19576 of 20000 (depth=28, stamp="default")
namespace bench_tu_19576 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19576>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19576
